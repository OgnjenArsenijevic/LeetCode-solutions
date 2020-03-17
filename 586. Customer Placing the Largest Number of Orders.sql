/*
586. Customer Placing the Largest Number of Orders
Author: Ognjen Arsenijevic
username: ognjen1998
*/
SELECT customer_number
FROM orders
GROUP BY customer_number
HAVING COUNT(order_number)>=ALL(SELECT COUNT(order_number)
FROM orders
GROUP BY customer_number)
