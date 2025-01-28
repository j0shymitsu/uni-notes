
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
- **95% of cybersecurity breaches are due to human error**

---
## Detailed Notes

### The Human Weakness & Social Engineering

##### Phishing
==Fraudulent emails, messages or websites== that appear legitimate are used to trick individuals into revealing personal information, such as passwords, credit card numbers, or social security numbers.
##### Baiting
Involves ==offering something enticing to lure victims==, like free software or a USB drive left in a public place. When used, the USB drive can install malicious software on the targets system.
##### Impersonation
==Pretending to be someone== with authority or a person the target knows to manipulate them into sharing sensitive information or performing certain actions.
##### Pretexting
==The attacker fabricates a scenario== (pretext) t==o gain the targets trust== and access private information. For example, they may pose as a co-worker, authority figure, or IT support to get personal or company information. Pretexting can also involve tailgating/piggybacking, which is gaining physical access to a restricted area by following someone with legitimate access.
##### Human Error
==95% of cybersecurity breaches are due to human error== - Human error can be described as "something has been done that was not intended by the actor; not desired by a set of rules; or that led the task or system outside of it's acceptable limits". Types of human error include:
- Skill-based errors:
	- Skill-based human error consists of slips and lapses; small mistakes that occur when performing familiar tasks and activities.
- Decision-based errors:
	- Decision-based errors are when a user makes a faulty decision, often called a ==violation.==
- Weak Passwords
- Misdelivery
- Phishing:
	- Used to lure targets to click a link or download malicious attachments, with email being the most common attack vector.
##### Weak Passwords
According to [[https://www.proofpoint.com/sites/default/files/wombatsecurity/WombatProofpoint-UserRiskSurveyReport2018_US.pdf|Wombat's 2018 User Risk Report]], ==66% of respondents who do not use a password manager tool admit to reusing passwords across online accounts==. The same report also notes that 39% of users believe the network they connect to is secure if they are in a place they trust.
##### Mis-delivery
Mis-delivery is the act of sending something to a wrong recipient, and is a common threat to organisational data security. ==Mis-delivery was the fifth most common cause of all cybersecurity breaches.== 

### Canary Tokens
##### What is a Canary Token?
A canary token is a unique link which is ==designed to detect when someone or something clicks on it, shares it, or interacts with it==. When clicked, an ==immediate alert== is sent to the person who set up the link. For this reason, a Canary Token can either be used for defensive applications, or for information gathering.
##### Details
In a typical alert received, there will be details of:
- When the token was triggered
- The IP address of the source
- User agent, containing details of:
	- The web browser used
	- The operating system used
	- The architecture, i.e, x64/x86

### Security vs Usability
##### What does security mean?
The classic [[CIA Triad]] defines most of our security needs, although there are many extensions to this:
- *PAIN* - Privacy, Availability/Authentication, Integrity, Non-Repudiation
- *4A Model* - Authentication, Authorisation, Availability, Authenticity
- *5A Model* - Admissibility, Authentication, Authorisation, Availability, Authenticity
- *Parkerian Hexad* - Confidentiality, Possession or Control, Integrity, Authenticity, Availability, Utility (usefulness)

==Security is often not what users want==, users want to get their work done and don't fully appreciate the security. Security often requires regular users to make ==harder decisions==, or take more steps. Increased security complexity often incurs ==additional costs, more computation, slower processes, and more difficulty in understanding.==
##### Usability
Therefore, we need to ==balance both security and usability.== The [[Triangle Paradox.png|triangle paradox]] in cybersecurity suggests that when designing a system, you can prioritise two out of the three characteristics: ==security, functionality, and usability.== According to this concept, it is believed that achieving high levels in all three areas simultaneously is difficult, and thus there is a trade-off involved:
- *Security* involves protecting against unauthorised access and cyber threats through measures like encryption, access controls, and security audits. ==Prioritising security may limit usability.==
- *Functionality* refers to a system's ability to perform tasks and meet user requirements. ==Focusing on functionality might compromise security or usability.== 
- *Usability* focuses on making a system user friendly and efficient, emphasising intuitive design and UX (user experience). ==Prioritising usability may reduce security measures or advanced features.==

### Password Attacks
##### Passwords
Passwords are usually the ==default line of defence against unauthorised access.== Passwords are ==encrypted and stored in files and databases.== [[Cryptographic Hashing]] functions are used to transform a password, using a [[One-Way Encryption Algorithm]], form it's clear text to it's safe-to-store form.

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

- [x] Command Line Familiarisation II