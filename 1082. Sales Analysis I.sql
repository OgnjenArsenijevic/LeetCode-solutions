/*
1082. Sales Analysis I
Author: Ognjen Arsenijevic
username: ognjen1998
*/
SELECT seller_id
FROM Sales
GROUP BY seller_id
HAVING SUM(price) >= ALL(
    SELECT SUM(price)
    FROM Sales
    GROUP BY seller_id)
