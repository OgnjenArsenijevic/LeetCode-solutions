/*
1251. Average Selling Price
Author: Ognjen Arsenijevic
username: ognjen1998
*/
SELECT p.product_id, ROUND(sum(price*units)*1.0/sum(units)*1.0, 2) AS average_price
FROM Prices p JOIN UnitsSold us
ON p.product_id = us.product_id
WHERE purchase_date BETWEEN start_date AND end_date
GROUP BY p.product_id
