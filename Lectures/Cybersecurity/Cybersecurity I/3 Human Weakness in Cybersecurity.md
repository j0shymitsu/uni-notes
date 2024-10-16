
Date: 14-10-24
Topics: Cybersecurity, social engineering, attack vectors, security, functionality

---
## Key Concepts

- The **human factor** is always the weakest link - "Users are the vulnerability that can never be patched"
- **Security is often not what users want**. Users want to get their work down and don't fully appreciate or know what security really means.
- Remember the **CIA triad**.
- The **triangle paradox** suggests that when designing a system, you can only prioritise 2 out of the 3 characteristics out of:
	- Usability
	- Functionality
	- Security

---
## Detailed Notes

### The Human Weakness & Social Engineering

##### Phishing

##### Baiting

##### Impersonation

##### Pretexting

##### Human Error
**95% of cybersecurity breaches are due to human error** -

### Weak Passwords

### Mis-delivery

### Canary Tokens

### Security vs Usability
triangle paradox

### Password Attacks
==Cryptographic hashing==

---
## Practical

#### Ashley Madison Data Breach (2015)

Ashley Madison is an online dating service marketed to people who are married or in relationships looking for affairs. It is a membership website and service and includes more than 60 million people in 53 countries.
##### What went wrong?
In July 2015, the website experienced a significant data breach. A group calling themselves "The Impact Team" claimed to have stolen user data and threatened to release users' names and personal information if the site did not shut down. The impacted data related to approximately 31 million individuals.

##### Why did it happen?
The group claimed the company profited from peoples' pain and highlighted the inefficiency of the company's "full delete" service; which promised a full delete of a user profile for a fee, but failed to fully remove their details.

##### How could it have been prevented?
To prevent this, several measures could have been implemented:
- More robust security measures: Advanced encryption for sensitive data ==both in transit and at rest.==
- Regular vulnerability assesments.
- Data minimisation: Companies should limit the amount of sensitive data they collect and store.
- Third-party risk management: Companies should assess the security measures of third-party vendors who have access to sensitive data.

#### Relevant Software

- **theHarvester** - Python tool for gathering email accounts
- **nslookup** - Find mail servers for the same website
- **Google Dorks** - A method for finding exposed data via Google (beware of honeypot!)
- **John the Ripper** - Brute force password hash types in the command line

---

## Reading List

- [ ] Command Line Familiarisation II