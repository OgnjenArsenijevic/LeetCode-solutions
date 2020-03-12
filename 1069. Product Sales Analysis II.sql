/*
1069. Product Sales Analysis II
Author: Ognjen Arsenijevic
username: ognjen1998
*/
SELECT product_id, SUM(quantity) AS total_quantity
FROM Sales
GROUP BY product_id
