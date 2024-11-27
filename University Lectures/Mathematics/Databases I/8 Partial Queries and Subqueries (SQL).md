# PARTIAL QUERIES AND SUBQUERIES: SQL
27-11-24

---
## KEY POINTS

- We sometimes only have part of the information 

---
## DETAILED NOTES

### Partial Searches
Needed when we want to find something which is only part of a field value. Requires the *LIKE* operator.

Example: Find all where postcode starts with 'CH' - *WHERE* postcode *LIKE* 'CH%'
Note: *WHERE* postcode = 'CH%' won't work!

'0178%' is an example of a *regex* (regular expression)


### Partial Match Selection
Wild cards:
- "%" Matches any number of chars
- "_" matches a *single* character
- Example: 
  - Name LIKE '%Park' - name ending with Park
  - Name LIKE 'P_rk' - names like 'Park', 'Pork', 'Perk'...

With dates:
- Easiest to use date functions (YEAR, MONTH, DAY)
- Example:
  - WHERE YEAR(BookingDate) = '2000'
  - AND MONTH(BookingDate) = '9'


### Subquery
A subquery is a query within another SQL query, it is always embedded within the WHERE clause

Use the *IN* operator. Example:
  - WHERE town IN ('Pitlochry', 'Dunkeld')


### Views
Views are 

---
## READING LIST
- [ ]

---
## TASKS
- [ ] 
