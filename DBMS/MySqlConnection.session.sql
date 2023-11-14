-- CREATE TABLE fuad.titanic (
--     PassengerId INT,
--     Survived INT,
--     Pclass INT,
--     Name VARCHAR(200),
--     Sex VARCHAR(200),
--     Age INT,
--     SibSp INT,
--     Parch INT,
--     Ticket VARCHAR(200),
--     Fare FLOAT,
--     Cabin VARCHAR(200),
--     Embarked VARCHAR(10)
-- );

LOAD DATA INFILE 'titanic.csv'
INTO TABLE fuad.titanic
FIELDS TERMINATED BY ','
ENCLOSED BY '"'
LINES TERMINATED BY '\n'
IGNORE 1 ROWS;