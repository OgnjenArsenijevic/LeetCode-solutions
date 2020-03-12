/*
1068. Product Sales Analysis I
Author: Ognjen Arsenijevic
username: ognjen1998
*/
SELECT p.product_name, s.year, s.price
FROM Sales s, Product p
WHERE s.product_id=p.product_id
