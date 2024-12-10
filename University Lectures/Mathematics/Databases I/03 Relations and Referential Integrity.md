# RELATIONS AND REFERENTIAL INTEGRITY
16-10-24


---
## KEY POINTS

- There are several relationship multiplicities: **one-to-one**, **one-to-many**, **many-to-one**, and **many-to-many**. 

- Many-to-many relatonships are **undesirable** and need to be **normalised**.

- An **entity relationship diagram (ERD)** is a diagram which **describes the design** of a database.


---
## DETAILED NOTES
### Relationships
- Relationships determine how entities connect with eachother and how the data operates.
- Improper use of relations can *restrict* the data.
- Relationships can be:
    - One-to-One
    - One-to-Many
    - Many-to-One
    - Many-to-Many

For example, if a husband only has one wife (*one-to-one*):
    Husband
    - Husband ID: H1 >   Wife ID: W1
    - Name: Jack      |  Name: Jill
    - Tel: 0124...    |  Tel: 0124..
                       > HusbandID: H1

If a husband has many wives (*one-to-many*):
    Husband
    - Husband ID: H1 >   Wife ID: W1    Wife ID: W2
    - Name: Jack      |  Name: Jill     Name: Jane
    - Tel: 0124...    |  Tel: 0124..    Tel: 0124..
                       * HusbandID: H1  HusbandID: H1

After this, *many-to-many relationships become undesirable, and they need to be normalised. In the above example, we could use a single table for husband/wife to create a "married" table. This acts as a *link* table for the many-to-may relationships:

SPOUSE
ID (PK):  H1      H2      W1      W2      W3
Name:     Jack    John    Jill    Jane    Janet -------
Tel:      0124..  0124..  0124..  0124..  0124..      |
                                                      |  
MARRIED                                               |
S1 ID(PK, FK)   H1  H1  H2  H2  <---------------------                        
S2 ID(PK, FK)   W1  W2  W1  H1


### Entity Relationship Diagram (ERD)
An entity relationship diagram (ERD) is a visual representation of the entities within a system and the relationships between them. It's commonly used in database design to map out how data entities relate to one another within a database. A breakdown:

 

---
## READING LIST
- [ ]


---
## TASKS
- [ ]
