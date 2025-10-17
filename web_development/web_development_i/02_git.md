# GIT, GITLAB, CI/CD
20-01-25

---

## Contents
1. Git
2. File Transfer Protocol (FTP)
   - Account creation in cPanel
3. Continuous Integration/Continuous Delivery (CI/CD)

---

## Git
- **Definition**: A source control system that manages version histories for code.
- **Key Features**:
  - Local and remote repositories.
  - Supports team collaboration.
- **GitHub vs GitLab**:
  - This module uses the university’s GitLab server.

### Key Git Terms:
1. **Clone**: Create a local repository from a remote one.
2. **Commit**: Save a snapshot of your code locally.
3. **Push**: Update the remote repository with local commits.
4. **Pull**: Synchronise your local repository with changes in the remote repository.

### Creating and Cloning Repositories in VS Code:
1. Create a repository in GitLab (e.g., `git.fse.network`).
2. Clone the repository using HTTPS.
3. Set up user access tokens for authentication.

---

## File Transfer Protocol (FTP)
- **Definition**: A mechanism for transferring files between clients and servers.
- **History**: Defined by the IETF in RFC 959 (1985).
- **Clients**:
  - GUI-based: FileZilla.
  - CLI-based: LFTP.

### Hosting Configuration:
- Use the student web server and cPanel for hosting.
- Create a `CO4127` folder in `public_html` for assignments.

### FTP Account Creation:
- Create an FTP account in cPanel (do not use the suggested host name).
- Use `cpanel.chester.network` for secure connections.
- FTP does not use your university credentials.

---

## Continuous Integration & Continuous Delivery/Deployment (CI/CD)
- **Purpose**:
  - Enables incremental changes and regular updates.
  - Automates building, testing, and deploying code.
- **Security**:
  - Scripts are run in containers (e.g., Docker) to mitigate risks.
  - Docker images like `alpine` are used for lightweight containers.
- **Workflow**:
  - The container runs an FTP client via CLI to deploy files to the server.

---

## Configuring CI
1. **Create a `.gitlab-ci.yml` File**:
   - Place it in the root of your repository.
   - Documentation: [GitLab CI YAML Guide](https://docs.gitlab.com/ee/ci/yaml/).
2. **Sample Script**:
   ```yaml
   stages:  
     - deploy  

   deploy-job: 
     stage: deploy 
     image: alpine:latest 
     environment: 
       name: production
       url: 1234567.linux.studentwebserver.co.uk/CO4127 
     before_script: 
       - apk update 
       - apk add lftp
     script:
       - lftp -c "open -u $FTP_USERNAME,$FTP_PASSWORD $FTP_HOST; mirror -Rnevp ./ ./ -x \(ReadMe.md|.gitlab-ci.yml) --parallel=5; bye"
     rules: 
       - if: $CI_COMMIT_BRANCH == $CI_DEFAULT_BRANCH
