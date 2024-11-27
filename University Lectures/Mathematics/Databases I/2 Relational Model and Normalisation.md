# RELATIONAL MODEL AND NORMALISATION
09-10-24

---
## KEY POINTS

- A **relational structure** is much preferred than a flat structure as it's **more predictable and unrepeated**. 

- **Normalisation** is the process of creating a **relational data structure**.

- 

---
## DETAILED NOTES

### Flat File vs Relational
*Relational databases* offer several advantages over *flat file* databases.
Relational databases contain multiple tables (e.g. drawers in a cabinet). Relational structures are:
- Quick to search
- Easy to redesign
- Predictable
- Useful for only having to store information once

A *flat database* contains everything in a single table (like a single "drawer"). There are no other tables to link to; all 
required information needs to be stored in each record. This leads to repetition.


### Primary vs Foreign Keys
A *primary key* is a *unique identifier* for a record in a table. It is (ideally):
- Familiar
- Stable; shouldn't change
- Minimal; as short as possible
  
There are several *types* of primary keys:
- Natural; chosen from an existing field.
- Derived; artificially created
- Composite or compound; a key with more than one field.

A foreign key is a column of a table that *references a primary key in another table.* The primary key and foreign key *must 
share the same data type*. 


### Normalisation
Normalisation is the process of *creating a relational data structure.* There is a set of formal rules that have been
invented to achieve this aim:
- Stage 1: Remove repeating groups. *First normal form* means *no repeated fields.*
- Stage 2: Remove partial dependencies. *Second normal form** means *no partial dependencies*.
- Stage 3: Remove indirect dependencies. This is *third normal form*. 


---
## READING LIST
- [ ] Quick and Easy Normalisation (video)
- [ ] Normalisation Example Solutions


---
## TASKS
- [ ] Normalisation Tasks:

