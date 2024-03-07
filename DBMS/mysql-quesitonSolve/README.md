<h1 align="center">Hackerrank MySql Problems</h1>

<details>
<summary>Type of Triangle</summary>
<a href="https://www.hackerrank.com/challenges/what-type-of-triangle/problem?isFullScreen=true">Problem Link</a>
<br>

``` sql
alter table TRIANGLES add column catagory varchar(225);
update TRIANGLES 
set catagory = case 
                    when (a+b<=c or a+c<=b or b+c<=a) then "Not A Triangle"
                    when (a=b and b=c) then "Equilateral"
                    when (a=b or b=c or a=c) then "Isosceles"
                    when (a!=b and b!=c) then "Scalene"
                end;
select catagory from TRIANGLES;

```
</details>

<details>
<summary>Population Census</summary>
<a href="https://www.hackerrank.com/challenges/asian-population/problem?isFullScreen=true">Problem Link</a>
<br>

``` sql
select sum(CITY.population) from CITY
inner join country on CITY.CountryCode = COUNTRY.Code 
where COUNTRY.continent = 'Asia';

```
</details>


<!-- Prototype of list -->
<details>
<summary>Problem name</summary>
<a href="problem link">Problem Link</a>
<br>

``` sql
code here
```
</details>
