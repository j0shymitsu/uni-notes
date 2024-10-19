
Date: 09-10-24
Topics: Databases, SQL, normalisation

---
## Key Concepts

- **Relational** databases offer several advantages over flat file databases.
- Primary keys are **unique identifiers** for tables.
- A foreign key is **always** the primary key of another table and **link two tables**.
- **First normal means no repeated fields**.
- **Second normal means no partial dependencies.**
- **Third (final) normal means no indirect dependencies.**

---
## Detailed Notes
### Flat File vs Relational
##### Relational
A relational database contains multiple tables; alike *drawers in a cabinet.* Tables link to other tables, and this means little repetition or redundancies. Relational structures are:
- Quick to search
- Easy to redesign
- Predictable
- Useful for only having to store information once
##### Flat
A flat database contains everything in a single table, like a *single drawer.* There are no other tables to link to, all required information needs to be stored in each record (which leads to repetition), which leads to mistakes and redundancies.


### Primary & Foreign Keys
##### Primary Keys
A primary key is a *unique identifier* for a record in a table. It is (ideally):

- Familiar -  *Easy to remember*
- Stable - *Shouldn't change*
- Minimal - *As short as possible

There are several types of primary keys:

- Natural - *Chosen from an existing field*
- Derived - *Artificially created*
- Composite or compound - *A key with more than one field*

Examples of primary keys include: NHS numbers, Student ID's, car registration *with* date of sale.
##### Foreign Keys
A foreign key is a column of a table that *references a primary key in another table.* The primary key and foreign key *must share the same datatype*. A table can have several foreign keys but only *ONE* primary key. For example:

	Student Table 

| Field             | Type         |
| ----------------- | ------------ |
| StudentID         | Int          |
| Name              | Char (12)    |
| dob               | Date         |
| ==CourseID (FK)== | ==Char (3)== |

	`Course Table`

| Field         | Type      |
| ------------- | --------- |
| ==CourseID==      | ==Char(3)==   |
| Name          | Varchar   |
| Level         | Int       |
| Course Leader | Char (12) |
In the *student table*, StudentID is the *primary key* and CourseID is the *foreign key*. In the course table, CourseID becomes the *primary key* - *A foreign key is always the primary key of another table.*


### Normalisation

- *Normalisation is the processes of creating a relational data structure*.
- There is a set of formal rules that have been invented to achieve this aim;

	- Stage 1: *Remove repeating groups*.
	- Stage 2: *Remove partial dependencies.*
	- Stage 3: *Remove indirect dependencies*.
##### Stage 1: Removing repeating groups
This involves taking the groups of fields which are repeated and *placing them in a separate table*. This table *always* has a composite key. After this stage, there are usually two tables - one with a single key, and one with a composite key.
##### Stage 2: Removing partial dependencies
This involves placing fields which are only dependent on one of the key fields  (*partial dependencies*) in a separate table. This takes us to "second normal form". 
##### Stage 3: Removing indirect dependencies
This stage involves looking at all the tables we now have, identifying fields which do not depend on the primary key of that table, and placing these in a separate table. This takes the table(s) to their third and final form.

---
## Practical

- [ ] Normalisation tasks

