## What is SQL?
SQL is the standard language for dealing with Relational Databases. \
SQL is used to insert, search, update, and delete database records. 

The following SQL statement selects all the records in the `Customers` table: 
``` SELECT * FROM Customers; ``` 
## SELECT Columns Example
The following SQL statement selects the "CustomerName", "City", and "Country" columns from the "Customers" table:
``` SELECT CustomerName, City, Country FROM Customers; ```
### SELECT DISTINCT Examples
The following SQL statement selects only the DISTINCT values from the "Country" column in the "Customers" table:
```SELECT DISTINCT Country FROM Customers;```
The following SQL statement counts and returns the number of different (distinct) countries in the "Customers" table:
```SELECT COUNT(DISTINCT Country) FROM Customers;```
## WHERE Syntax
```
SELECT column1, column2, ...
FROM table_name
WHERE condition; 
```
``` SELECT * FROM Customers WHERE CustomerID = 1;```
### MySQL AND, OR and NOT Operators
```
SELECT * FROM Customers
WHERE Country = 'Germany' AND City = 'Berlin';
```
### MySQL ORDER BY Keyword
```
SELECT * FROM Customers
ORDER BY Country ASC, CustomerName DESC;
```
### ALTER TABLE - ADD Column
```
ALTER TABLE Customers
ADD Email varchar(255);
```
`DROP` COLUMN
```
ALTER TABLE Customers
DROP COLUMN ContactName;
```
### ALTER TABLE - MODIFY COLUMN
```
ALTER TABLE Persons
MODIFY COLUMN DateOfBirth year;
```
### UNIQUE Constraint on ALTER TABLE
```
ALTER TABLE Persons
ADD UNIQUE (ID);
```

### FOREIGN KEY on CREATE TABLE
```
CREATE TABLE Orders (
    OrderID int NOT NULL,
    OrderNumber int NOT NULL,
    PersonID int,
    PRIMARY KEY (OrderID),
    FOREIGN KEY (PersonID) REFERENCES Persons(PersonID)
);
```

### CHECK on CREATE TABLE
```
CREATE TABLE Persons (
    ID int NOT NULL,
    LastName varchar(255) NOT NULL,
    FirstName varchar(255),
    Age int,
    CHECK (Age>=18)
);
```

### CHECK on ALTER TABLE
```
ALTER TABLE Persons
ADD CHECK (Age>=18);
```

### MySQL INSERT INTO Statement
```
INSERT INTO Customers (CustomerName, ContactName, Address, City, PostalCode, Country)
VALUES ('Cardinal', 'Tom B. Erichsen', 'Skagen 21', 'Stavanger', '4006', 'Norway');
```
### MySQL NULL Values
A field with a NULL value is a field with no value.
`IS NULL`
```
SELECT CustomerName, ContactName, Address
FROM Customers
WHERE Address IS NULL;
```
`IS NOT NULL`
```
SELECT CustomerName, ContactName, Address
FROM Customers
WHERE Address IS NOT NULL;
```
### MySQL UPDATE Statement
The following SQL statement updates the first customer (CustomerID = 1) with a new contact person and a new city.
```
UPDATE Customers
SET ContactName = 'Alfred Schmidt', City = 'Frankfurt'
WHERE CustomerID = 1;
```
### Update Warning!
Be careful when updating records. If you **omit** the `WHERE` clause, ALL records will be updated!
```
UPDATE Customers
SET PostalCode = 00000;
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
```
SELECT * FROM Customers
LIMIT 3;
```
What if we want to select records 4 - 6 (inclusive)? \
MySQL provides a way to handle this: by using OFFSET. \
The SQL query below says "return only 3 records, start on record 4 (OFFSET 3)":
```
SELECT * FROM Customers
LIMIT 3 OFFSET 3;
```
**another**
```
SELECT * FROM Customers
WHERE Country='Germany'
LIMIT 3;
```
### MySQL MIN() and MAX() Functions
The `MIN()` function returns the smallest value of the selected column. \
The `MAX()` function returns the largest value of the selected column.
```
SELECT MIN(Price) AS SmallestPrice
FROM Products;
```
`MAX() Example`
```
SELECT MAX(Price) AS LargestPrice
FROM Products;

```
### MySQL COUNT(), AVG() and SUM() Functions
`COUNT() Example` 
```
SELECT COUNT(ProductID)
FROM Products;
```
`AVG() Example`
```
SELECT AVG(Price)
FROM Products;
```
`SUM() Example`
```
SELECT SUM(Quantity)
FROM OrderDetails;
```
**Note:** NULL values are ignored.

### MySQL LIKE Operator
The `LIKE` operator is used in a `WHERE` clause to search for a specified pattern in a column. \
There are two wildcards often used in conjunction with the LIKE operator:

- The percent sign (%) represents zero, one, or multiple characters
- The underscore sign (_) represents one, single character


The percent sign and the underscore can also be used in combinations! \
Tip: You can also combine any number of conditions using AND or OR operators.

-- Finds any values that start with "a"
`SELECT * FROM YourTable WHERE CustomerName LIKE 'a%';`

-- Finds any values that end with "a"
`SELECT * FROM YourTable WHERE CustomerName LIKE '%a';`

-- Finds any values that have "or" in any position
`SELECT * FROM YourTable WHERE CustomerName LIKE '%or%';`

-- Finds any values that have "r" in the second position
`SELECT * FROM YourTable WHERE CustomerName LIKE '_r%';`

-- Finds any values that start with "a" and are at least 2 characters in length
`SELECT * FROM YourTable WHERE CustomerName LIKE 'a_%';`

-- Finds any values that start with "a" and are at least 3 characters in length
`SELECT * FROM YourTable WHERE CustomerName LIKE 'a__%';`

-- Finds any values that start with "a" and end with "o"
`SELECT * FROM YourTable WHERE ContactName LIKE 'a%o';`

-- Finds any values that not start with "a"
`SELECT * FROM YourTable WHERE CustomerName not LIKE 'a%';`

### MySQL IN Operator
The following SQL statement selects all customers that are located in "Germany", "France" or "UK":\
```
SELECT * FROM Customers
WHERE Country IN ('Germany', 'France', 'UK');
```
The following SQL statement selects all customers that are NOT located in "Germany", "France" or "UK": \
```
SELECT * FROM Customers
WHERE Country NOT IN ('Germany', 'France', 'UK');
```
The following SQL statement selects all customers that are from the same countries as the suppliers: \
```
SELECT * FROM Customers
WHERE Country IN (SELECT Country FROM Suppliers);
```
### MySQL BETWEEN Operator
The `BETWEEN` operator selects values within a given range. The values can be numbers, text, or dates. \
```
SELECT * FROM Products
WHERE Price BETWEEN 10 AND 20;
```
### NOT BETWEEN Example
```
SELECT * FROM Products
WHERE Price NOT BETWEEN 10 AND 20;
```
### BETWEEN with IN Example
```
SELECT * FROM Products
WHERE Price BETWEEN 10 AND 20
AND CategoryID NOT IN (1,2,3);
```
### BETWEEN Text Values Example
```
SELECT * FROM Products
WHERE ProductName BETWEEN 'Carnarvon Tigers' AND 'Mozzarella di Giovanni'
ORDER BY ProductName;
```
### NOT BETWEEN Text Values Example
```
SELECT * FROM Products
WHERE ProductName NOT BETWEEN 'Carnarvon Tigers' AND 'Mozzarella di Giovanni'
ORDER BY ProductName;
```
### MySQL Aliases
Aliases are used to give a table, or a column in a table, a temporary name. \
Aliases are often used to make column names more readable. \
An alias only exists for the duration of that query. \
An alias is created with the AS keyword. \
### Alias for Columns Examples
```
SELECT CustomerID AS ID, CustomerName AS Customer
FROM Customers;
```
**Note:** Single or double quotation marks are required if the alias name contains spaces. \
```
SELECT CustomerName AS Customer, ContactName AS "Contact Person"
FROM Customers;
```
The following SQL statement creates an alias named "Address" that combine four columns (Address, PostalCode, City and Country) \
```
SELECT CustomerName, CONCAT_WS(', ', Address, PostalCode, City, Country) AS Address
FROM Customers;
```
### Alias for Tables Example
```
SELECT o.OrderID, o.OrderDate, c.CustomerName
FROM Customers AS c, Orders AS o
WHERE c.CustomerName='Around the Horn' AND c.CustomerID=o.CustomerID;
```
**Same as above**\
```
SELECT Orders.OrderID, Orders.OrderDate, Customers.CustomerName
FROM Customers, Orders
WHERE Customers.CustomerName='Around the Horn' AND Customers.CustomerID=Orders.CustomerID;
```
### MySQL Joins
A `JOIN` clause is used to combine rows from two or more tables, based on a related column between them. \
Notice that the "CustomerID" column in the "Orders" table refers to the "CustomerID" in the "Customers" table. The relationship between the two tables above is the "CustomerID" column.

Then, we can create the following SQL statement (that contains an INNER JOIN), that selects records that have matching values in both tables:
```
SELECT Orders.OrderID, Customers.CustomerName, Orders.OrderDate
FROM Orders
INNER JOIN Customers ON Orders.CustomerID=Customers.CustomerID;
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
```
SELECT Orders.OrderID, Customers.CustomerName, Shippers.ShipperName
FROM ((Orders
INNER JOIN Customers ON Orders.CustomerID = Customers.CustomerID)
INNER JOIN Shippers ON Orders.ShipperID = Shippers.ShipperID);
```
### JOIN Three Tables
```
SELECT Orders.OrderID, Customers.CustomerName, Shippers.ShipperName
FROM ((Orders
INNER JOIN Customers ON Orders.CustomerID = Customers.CustomerID)
INNER JOIN Shippers ON Orders.ShipperID = Shippers.ShipperID);
```
### MySQL RIGHT JOIN Example
```
SELECT Customers.CustomerName, Orders.OrderID
FROM Customers
CROSS JOIN Orders
WHERE Customers.CustomerID=Orders.CustomerID;
```
### MySQL Self Join 
```
SELECT A.CustomerName AS CustomerName1, B.CustomerName AS CustomerName2, A.City
FROM Customers A, Customers B
WHERE A.CustomerID <> B.CustomerID
AND A.City = B.City
ORDER BY A.City;
```
### SQL UNION
```
SELECT City, Country FROM Customers
WHERE Country='Germany'
UNION
SELECT City, Country FROM Suppliers
WHERE Country='Germany'
ORDER BY City;
```
### MySQL GROUP BY
The GROUP BY statement groups rows that have the same values into summary rows, like "find the number of customers in each country". \
The GROUP BY statement is often used with aggregate functions (COUNT(), MAX(), MIN(), SUM(), AVG()) to group the result-set by one or more columns.

```
SELECT COUNT(CustomerID), Country
FROM Customers
GROUP BY Country
ORDER BY COUNT(CustomerID) DESC;
```
### GROUP BY With JOIN
The following SQL statement lists the number of orders sent by each shipper

```
SELECT Shippers.ShipperName, COUNT(Orders.OrderID) AS NumberOfOrders FROM Orders
LEFT JOIN Shippers ON Orders.ShipperID = Shippers.ShipperID
GROUP BY ShipperName;
```
### MySQL HAVING Clause
The `HAVING` clause was added to SQL because the `WHERE` keyword cannot be used with aggregate functions.
```
SELECT COUNT(CustomerID), Country
FROM Customers
GROUP BY Country
HAVING COUNT(CustomerID) > 5;
```
### The MySQL EXISTS Operator
The `EXISTS` operator returns TRUE if the subquery returns one or more records.

```
SELECT SupplierName
FROM Suppliers
WHERE EXISTS (SELECT ProductName FROM Products WHERE Products.SupplierID = Suppliers.supplierID AND Price = 22);
```

### The ANY Operator
`ANY` means that the condition will be true if the operation is true for any of the values in the range.
```
SELECT ProductName FROM Products
WHERE ProductID = ANY (SELECT ProductID FROM OrderDetails WHERE Quantity > 1000);
```
### SQL ALL Examples
```
SELECT ProductName FROM Products
WHERE ProductID = ALL (SELECT ProductID FROM OrderDetails WHERE Quantity = 10);
```
### MySQL INSERT INTO SELECT Examples
```
INSERT INTO Customers (CustomerName, City, Country)
SELECT SupplierName, City, Country FROM Suppliers;
```

### The MySQL CASE Statement
The `CASE` statement goes through conditions and returns a value when the first condition is met (like an if-then-else statement).
```
SELECT OrderID, Quantity,
CASE
    WHEN Quantity > 30 THEN 'The quantity is greater than 30'
    WHEN Quantity = 30 THEN 'The quantity is 30'
    ELSE 'The quantity is under 30'
END AS QuantityText
FROM OrderDetails;
```
