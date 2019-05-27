/*
183. Customers Who Never Order
Author: Ognjen Arsenijevic
username: ognjen 1998
*/
SELECT NAME AS "CUSTOMERS"
FROM CUSTOMERS
WHERE ID NOT IN (SELECT CUSTOMERID FROM ORDERS)
w
