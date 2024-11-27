# EXERCISES 

1. A college wishes to computerise its student records. They want to include these fields:-
EnrolNo, Surname, Forenames, Gender, DateOfBirth, PersonalTutorID, PersonalTutorName, ModuleNo, ModuleTitle, Mark, Result

Assume that each student studies several modules and that there is a mark and result for each.

```SQL
    -- 1NF
    Student_Module(EnrolNo, Surname, Forenames, Gender, DateOfBirth, PersonalTutorID, PersonalTutorName, ModuleNo, ModuleTitle, Mark, Result)

    -- 2NF
    Student(EnrolNo, Surname, Forenames, Gender, DateOfBirth)
    Module(ModuleNo, ModuleTitle)
    StudentModule(EnrolNo, ModuleNo, Mark, Result)
    Tutor(PersonalTutorID, PersonalTutorName)

    -- 3NF
    -- Already in 3NF
```
---

2. A university department wants a database to store data about its computing books. The books are bought via a series of salesmen who each sell books from several publishers. The books are then lent out to students.
The BookNo identifies each book uniquely and the ISBN identifies each different title. There may be several copies of the same book. The fields which need to be stored are as follows:
BookNo, ISBN, Title, Author, Publisher, SalesmanID, SalesmanName, SalesmanPhone, StudentNo, StudentName, StudentPhone, ReturnDate, DepositPaid, DepositReturned

Normalise the data to third normal form showing each stage in your working.

```SQL
    -- 1NF
    Computing_Books(BookNo, ISBN, Title, Author, Publisher, SalesmanID, SalesmanName, SalesmanPhone, StudentNo, StudentName, StudentPhone, ReturnDate, DepositPaid, DepositReturned)

    -- 2NF
    Books(BookNo, ISBN, Title, Author, Publisher)
    Seller(SalesmanID, SalesmanName, SalesmanPhone)
    Students(StudentNo, StudentName, StudentPhone)
    Loans(ReturnDate, DepositPaid, DepositReturned)

    -- 3NF
    -- Already in 3NF
```
---

3. An agency letting country cottages wishes to computerise its records. It has a number of properties, which it lets by the week on behalf of the owners. Each property is identified by its brochure number and has a different basic rental, which is then multiplied by a tariff, which varies according to the time of year. An initial analysis of the company’s needs has indicated the data items that it wishes to record which are listed below.
BrochureNo, PropertyAddress, PropertyTown, Bedrooms, WeekNo, Tariff, ClientName, ClientAddress, ClientPhone, SizeofParty, OwnersName, OwnersAddress, OwnersPhone

```SQL
    -- 1NF
    Country_Cottages(BrochureNo, PropertyAddress, PropertyTown, Bedrooms, WeekNo, Tariff, ClientName, ClientAddress, ClientPhone, SizeofParty, OwnersName, OwnersAddress, OwnersPhone)

    -- 2NF
    Properties(BrochureNo, PropertyAddress, PropertyTown, Bedrooms, OwnersName)
    Rentals(BrochureNo, WeekNo)
    Owners(OwnersName, OwnersAddress, OwnersPhone)
```

---

4. You have been asked to design a database system for the Computer Science department to keep track of loans of dissertations to students. The department wishes to store the following data: -
StudentNo, StudentName, CourseCode, CourseName, DissertationNo, Title, Author, Supervisor, LoanDate, LoanPeriod, Returned

Normalise the data above showing each of the three stages, stating clearly any assumptions made.

---

5. An international athletics event wishes to set up a database to record details of events and entrants. The following data is required for each event: -
EventNo, EventName, Day, Time, CompetitorNo, CompetitorName, CompetitorAge, CompetitorGender, CompetitorCountry, NationalAnthem, OfficialNo, OfficialName, OfficialNationality

Each competitor can participate in several events and that each event has a single official.
Normalise the data above showing each of the three stages, stating clearly any assumptions made.

--- 

6. The manager of a classical music lending library wishes to store information about every CD held in her library. Information is also kept of composers, orchestras and music publishers.
Each CD has a number of tracks sometimes by different composers and each individual piece of music is identified uniquely by an Opus Number. Every CD also has a publisher and date of publication.
CDNo, CDTitle, PublisherName, PublisherAddress, PublicationDate, Orchestra, Conductor, OpusNo, TrackTitle, Composer, ComposerNationality, DateComposed.

---

7. An educational book suppliers wishes to set up a database to store details of its sales
InvoiceNo, Date, UniversityCode, UniversityName, Department, Town, Postcode, ISBN, Title, BookCost, Quantity, BookTotal, InvoiceTotal, InvoicePaid, SalesmanNo, SalesmanName

You can assume that each invoice is created as the result of an order placed through a single salesman.

