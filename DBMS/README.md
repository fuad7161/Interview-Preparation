## What is SQL?
SQL is the standard language for dealing with Relational Databases. \
SQL is used to insert, search, update, and delete database records. 

## SELECT Columns Example
**The following SQL statement selects all the records in the `Customers` table:**

``` sql 
SELECT * FROM Customers; 
``` 
### Example
**The following SQL statement selects the "CustomerName", "City", and "Country" columns from the "Customers" table:**
``` sql
SELECT CustomerName, City, Country FROM Customers; 
```

### SELECT DISTINCT Examples
**The following SQL statement selects only the DISTINCT values from the "Country" column in the "Customers" table:**
``` sql 
SELECT DISTINCT Country FROM Customers;
```
### Example
**The following SQL statement counts and returns the number of different (distinct) countries in the "Customers" table:**
``` sql
SELECT COUNT(DISTINCT Country) FROM Customers;
```
## WHERE Syntax
``` sql
SELECT column1, column2, ...
FROM table_name
WHERE condition; 
``` 
``` sql 
SELECT * FROM Customers WHERE CustomerID = 1;
```
``` sql
SELECT * FROM Customers where not city = 'Berlin';
```

## MySQL AND, OR and NOT Operators
``` sql
SELECT * FROM Customers
WHERE Country = 'Germany' AND City = 'Berlin';
```
### Exercise:
**Select all records where the City column has the value 'Berlin' and the PostalCode column has the value 12209.**


``` sql
select * FROM Customers
where City = 'Berlin'and PostalCode = 12209;
```

## Exercise:
**Select all records where the City column has the value 'Berlin' or 'London'.**


``` sql
select * FROM Customers
where City = 'Berlin'or City = 'London';
```

## MySQL ORDER BY Keyword
### Example
**The following SQL statement selects all customers from the "Customers" table, sorted ascending by the "Country" and descending by the "CustomerName" column:**
``` sql
SELECT * FROM Customers
ORDER BY Country ASC, CustomerName DESC;
```

### Exercise:
**Select all records from the Customers table, sort the result alphabetically, first by the column `Country`, then, by the column `City`.**

``` sql 
SELECT * FROM Customers
order by Country, City;
```

## MySQL INSERT INTO Statement
```sql
INSERT INTO table_name (column1, column2, column3, ...)
VALUES (value1, value2, value3, ...);
```

Exercise:
Select all records from the Customers where the PostalCode column is empty.

## MySQL NULL Values
``` sql 
SELECT * FROM Customers
WHERE PostalCode is NULL;
```

### Exercise:
**Select all records from the `Customers` where the `PostalCode` column is `NOT` `empty`.**


``` sql 
SELECT * FROM Customers
WHERE PostalCode is not NULL;
```

## MySQL UPDATE
```sql
UPDATE table_name
SET column1 = value1, column2 = value2, ...
WHERE condition;
```

### Exercise:
**Set the value of the `City` columns to 'Oslo', but only the ones where the `Country` column has the value "Norway".**


``` sql 
update Customers 
set City = 'Oslo' where Country = 'Norway';
```

**Update the `City` value and the `Country` value.**


```sql 
update Customers
set City = 'Oslo', Country = 'Norway'
WHERE CustomerID = 32;
```
### Update Warning!
Be careful when updating records. If you **omit** the `WHERE` clause, ALL records will be updated!
``` sql
UPDATE Customers
SET PostalCode = 00000;
```
## MySQL DELETE
``` sql
DELETE FROM table_name WHERE condition;
```
### Exercise:
**Delete all the records from the `Customers` table where the `Country` value is 'Norway'.**


``` sql 
delete from Customers
where Country = 'Norway';
```
## MySQL LIMIT
```sql
SELECT column_name(s)
FROM table_name
WHERE condition
LIMIT number;
```
### Example
**The following SQL statement selects the first three records from the "Customers" table, where the country is "Germany":**

``` sql 
SELECT * FROM Customers
WHERE Country='Germany'
LIMIT 3;
```
## MySQL MIN() and MAX() Functions
```sql
SELECT MIN(column_name)
FROM table_name
WHERE condition;
```
## MySQL COUNT(), AVG() and SUM() Functions
```sql
SELECT COUNT(column_name)
FROM table_name
WHERE condition;
```
### Exercise:
**Use the correct function to return the number of records that have the `Price` value set to 18.**


``` sql 
SELECT count(*)
FROM Products where Price = 18;
```
## MySQL LIKE Operator
``` sql
SELECT column1, column2, ...
FROM table_name
WHERE columnN LIKE pattern;
```
### Exercise:
**Select all records where the value of the `City` column starts with the letter "a".**


```sql 
SELECT * FROM Customers
where City like 'a%';
```
**Select all records where the value of the `City` column ends with the letter "a".**


``` sql
SELECT * FROM Customers
where City like '%a';
```
**Select all records where the value of the `City` column contains the letter "a".**


``` sql 
SELECT * FROM Customers
where City like '%a%';
```
**Select all records where the value of the `City` column does NOT start with the letter "a".**


```sql
SELECT * FROM Customers
where City not like 'a%';
```
**Select all records where the second letter of the `City` is an "a".**
``` sql 
SELECT * FROM Customers
WHERE City LIKE '_a%';
```
```sql
WHERE CustomerName LIKE 'a%' -- start with a
WHERE CustomerName LIKE '%a' -- end with a 
WHERE CustomerName LIKE '%or%' -- have "or" in any position 
WHERE CustomerName LIKE '_r%' --have "r" in the second position
WHERE CustomerName LIKE 'a_%_%' --starts with "a" and are at least 3 characters in length
WHERE ContactName LIKE 'a%o' --starts with "a" and ends with "o"
```

### ALTER TABLE - ADD Column
```sql
ALTER TABLE Customers ADD Email varchar(255);
```
`DROP` COLUMN
```sql
ALTER TABLE Customers DROP COLUMN ContactName;
```
### ALTER TABLE - MODIFY COLUMN
```sql
ALTER TABLE Persons MODIFY COLUMN DateOfBirth year;
```
### UNIQUE Constraint on ALTER TABLE
```sql
ALTER TABLE Persons ADD UNIQUE (ID);
```

### FOREIGN KEY on CREATE TABLE
```sql
CREATE TABLE Orders (
    OrderID int NOT NULL,
    OrderNumber int NOT NULL,
    PersonID int,
    PRIMARY KEY (OrderID),
    FOREIGN KEY (PersonID) REFERENCES Persons(PersonID)
);
```

### CHECK on CREATE TABLE
```sql
CREATE TABLE Persons (
    ID int NOT NULL,
    LastName varchar(255) NOT NULL,
    FirstName varchar(255),
    Age int,
    CHECK (Age>=18)
);
```

### CHECK on ALTER TABLE
```sql
ALTER TABLE Persons ADD CHECK (Age>=18);
```

### MySQL INSERT INTO Statement
```sql
INSERT INTO Customers (CustomerName, ContactName, Address, City, PostalCode, Country)
VALUES ('Cardinal', 'Tom B. Erichsen', 'Skagen 21', 'Stavanger', '4006', 'Norway');
```
### MySQL NULL Values
A field with a NULL value is a field with no value.
`IS NULL`
```sql
SELECT CustomerName, ContactName, Address
FROM Customers
WHERE Address IS NULL;
```
`IS NOT NULL`
```sql
SELECT CustomerName, ContactName, Address
FROM Customers
WHERE Address IS NOT NULL;
```

### MySQL DELETE Statement
The `DELETE` statement is used to delete existing records in a table.
```DELETE FROM table_name WHERE condition;```
```delete from Customers where CoustomerName='Fuad';```
### Delete All Records
It is possible to delete all rows in a table without deleting the table. This means that the table structure, attributes, and indexes will be intact:
```DELETE FROM Customers;```
### What is a TRUNCATE Command?
The Truncate statement is a DDL or Data Definition Language command that is used to delete the complete data from the table without deleting the table structure. You cannot use the WHERE clause with this command; therefore, you cannot filter the records. \
```TRUNCATE TABLE players;```

### MySQL LIMIT Clause
The `LIMIT` clause is used to specify the number of records to return. \
The `LIMIT` clause is useful on large tables with thousands of records. Returning a large number of records can impact performance.
```sql
SELECT * FROM Customers
LIMIT 3;
```
What if we want to select records 4 - 6 (inclusive)? \
MySQL provides a way to handle this: by using OFFSET. \
The SQL query below says "return only 3 records, start on record 4 (OFFSET 3)":
```sql
SELECT * FROM Customers
LIMIT 3 OFFSET 3;
```
**another**
```sql
SELECT * FROM Customers
WHERE Country='Germany'
LIMIT 3;
```
### MySQL MIN() and MAX() Functions
The `MIN()` function returns the smallest value of the selected column. \
The `MAX()` function returns the largest value of the selected column.
```sql
SELECT MIN(Price) AS SmallestPrice
FROM Products;
```
`MAX() Example`
```sql
SELECT MAX(Price) AS LargestPrice
FROM Products;

```
### MySQL COUNT(), AVG() and SUM() Functions
`COUNT() Example` 
```sql
SELECT COUNT(ProductID)
FROM Products;
```
`AVG() Example`
```sql
SELECT AVG(Price)
FROM Products;
```
`SUM() Example`
```sql
SELECT SUM(Quantity)
FROM OrderDetails;
```
**Note:** NULL values are ignored.


### MySQL IN Operator
**The following SQL statement selects all `customers` that are located in "Germany", "France" or "UK":**
``` sql
SELECT * FROM Customers
WHERE Country IN ('Germany', 'France', 'UK');
```
**The following SQL statement selects all `customers` that are NOT located in "Germany", "France" or "UK":**
``` sql
SELECT * FROM Customers
WHERE Country NOT IN ('Germany', 'France', 'UK');
```
**The following SQL statement selects all `customers` that are from the same countries as the suppliers:**
```  sql
SELECT * FROM Customers
WHERE Country IN (SELECT Country FROM Suppliers);
```
## MySQL BETWEEN Operator
**The `BETWEEN` operator selects values within a given range. The values can be numbers, text, or dates. **
``` sql
SELECT * FROM Products
WHERE Price BETWEEN 10 AND 20;
```
### NOT BETWEEN Example
``` sql
SELECT * FROM Products
WHERE Price NOT BETWEEN 10 AND 20;
```
### BETWEEN with IN Example
```sql
SELECT * FROM Products
WHERE Price BETWEEN 10 AND 20
AND CategoryID NOT IN (1,2,3);
```
### BETWEEN Text Values Example
```sql
SELECT * FROM Products
WHERE ProductName BETWEEN 'Carnarvon Tigers' AND 'Mozzarella di Giovanni'
ORDER BY ProductName;
```
### NOT BETWEEN Text Values Example
``` sql
SELECT * FROM Products
WHERE ProductName NOT BETWEEN 'Carnarvon Tigers' AND 'Mozzarella di Giovanni'
ORDER BY ProductName;
```
### MySQL Aliases
Aliases are used to give a table, or a column in a table, a **temporary name**. Aliases are often used to make column names more readable. An Alias only exists for the duration of that query. An Alias is created with the AS keyword. 
### Alias for Columns Examples
``` sql
SELECT CustomerID AS ID, CustomerName AS Customer
FROM Customers;
```
**Note:** Single or double quotation marks are required if the alias name contains spaces. 
```sql
SELECT CustomerName AS Customer, ContactName AS "Contact Person"
FROM Customers;
```
```sql
SELECT CustomerName, CONCAT_WS(', ', Address, PostalCode, City, Country) AS Address
FROM Customers;
```
### Alias for Tables Example
```sql
SELECT o.OrderID, o.OrderDate, c.CustomerName
FROM Customers AS c, Orders AS o
WHERE c.CustomerName='Around the Horn' AND c.CustomerID=o.CustomerID;
```
**Same as above**\
```sql
SELECT Orders.OrderID, Orders.OrderDate, Customers.CustomerName
FROM Customers, Orders
WHERE Customers.CustomerName='Around the Horn' AND Customers.CustomerID=Orders.CustomerID;
```
### MySQL Joins
A `JOIN` clause is used to combine rows from two or more tables, based on a related column between them. 
Notice that the `CustomerID` column in the `Orders` table refers to the `CustomerID` in the "Customers" table. The relationship between the two tables above is the `CustomerID` column.

Then, we can create the following SQL statement (that contains an INNER JOIN), that selects records that have matching values in both tables:
```sql
SELECT Orders.OrderID, Customers.CustomerName, Orders.OrderDate
FROM Orders INNER JOIN Customers ON Orders.CustomerID=Customers.CustomerID;
```
`INNER JOIN`: Returns records that have matching values in both tables
`LEFT JOIN`: Returns all records from the left table, and the matched records from the right table
`RIGHT JOIN`: Returns all records from the right table, and the matched records from the left table
`CROSS JOIN`: Returns all records from both tables
|INNER JOIN|LEFT JOIN|RIGHT JOIN|CROSS JOIN|
| ------------- | ------------- | ------------- | ------------- |
| ![](https://www.w3schools.com/mysql/img_inner_join.png)  | ![](https://www.w3schools.com/mysql/img_left_join.png)  |![](https://www.w3schools.com/mysql/img_right_join.png)  | ![](https://www.w3schools.com/mysql/img_cross_join.png)  |

### JOIN Three Tables
The following SQL statement selects all orders with customer and shipper information:
```sql
SELECT Orders.OrderID, Customers.CustomerName, Shippers.ShipperName
FROM ((Orders
INNER JOIN Customers ON Orders.CustomerID = Customers.CustomerID)
INNER JOIN Shippers ON Orders.ShipperID = Shippers.ShipperID);
```
### JOIN Three Tables
```sql
SELECT Orders.OrderID, Customers.CustomerName, Shippers.ShipperName
FROM ((Orders
INNER JOIN Customers ON Orders.CustomerID = Customers.CustomerID)
INNER JOIN Shippers ON Orders.ShipperID = Shippers.ShipperID);
```
### MySQL RIGHT JOIN Example
```sql
SELECT Customers.CustomerName, Orders.OrderID
FROM Customers
CROSS JOIN Orders
WHERE Customers.CustomerID=Orders.CustomerID;
```
### MySQL Self Join 
```sql
SELECT A.CustomerName AS CustomerName1, B.CustomerName AS CustomerName2, A.City
FROM Customers A, Customers B
WHERE A.CustomerID <> B.CustomerID
AND A.City = B.City
ORDER BY A.City;
```
### SQL UNION
```sql
SELECT City, Country FROM Customers
WHERE Country='Germany'
UNION SELECT City, Country FROM Suppliers
WHERE Country='Germany' ORDER BY City;
```
### MySQL GROUP BY
The GROUP BY statement groups rows that have the same values into summary rows, like "find the number of customers in each country". \
The GROUP BY statement is often used with aggregate functions (COUNT(), MAX(), MIN(), SUM(), AVG()) to group the result-set by one or more columns.

```sql
SELECT COUNT(CustomerID), Country
FROM Customers GROUP BY Country
ORDER BY COUNT(CustomerID) DESC;
```
### GROUP BY With JOIN
The following SQL statement lists the number of orders sent by each shipper

```sql
SELECT Shippers.ShipperName, COUNT(Orders.OrderID) AS NumberOfOrders FROM Orders
LEFT JOIN Shippers ON Orders.ShipperID = Shippers.ShipperID
GROUP BY ShipperName;
```
### MySQL HAVING Clause
The `HAVING` clause was added to SQL because the `WHERE` keyword cannot be used with aggregate functions.
```sql
SELECT COUNT(CustomerID), Country
FROM Customers
GROUP BY Country
HAVING COUNT(CustomerID) > 5;
```
### The MySQL EXISTS Operator
The `EXISTS` operator returns TRUE if the subquery returns one or more records.

```sql
SELECT SupplierName FROM Suppliers
WHERE EXISTS (SELECT ProductName FROM Products 
WHERE Products.SupplierID = Suppliers.supplierID AND Price = 22);
```

### The ANY Operator
`ANY` means that the condition will be true if the operation is true for any of the values in the range.
```sql
SELECT ProductName FROM Products
WHERE ProductID = ANY (SELECT ProductID FROM OrderDetails WHERE Quantity > 1000);
```
### SQL ALL Examples
```sql
SELECT ProductName FROM Products
WHERE ProductID = ALL (SELECT ProductID FROM OrderDetails WHERE Quantity = 10);
```
### MySQL INSERT INTO SELECT Examples
```sql
INSERT INTO Customers (CustomerName, City, Country)
SELECT SupplierName, City, Country FROM Suppliers;
```

### The MySQL CASE Statement
The `CASE` statement goes through conditions and returns a value when the first condition is met (like an if-then-else statement).
```sql
SELECT OrderID, Quantity,
CASE
    WHEN Quantity > 30 THEN 'The quantity is greater than 30'
    WHEN Quantity = 30 THEN 'The quantity is 30'
    ELSE 'The quantity is under 30'
END AS QuantityText
FROM OrderDetails;
```
