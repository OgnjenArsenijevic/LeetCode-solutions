/*
1327. List the Products Ordered in a Period
Author: Ognjen Arsenijevic
username: ognjen1998
*/
SELECT product_name, SUM(unit) AS unit
FROM Products p JOIN Orders o ON p.product_id = o.product_id
WHERE month(order_date) = 2 AND year(order_date) = 2020
GROUP BY product_name
HAVING unit >= 100
