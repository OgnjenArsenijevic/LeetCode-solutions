/*
1173. Immediate Food Delivery I
Author: Ognjen Arsenijevic
username: ognjen1998
*/
SELECT  
ROUND
(
    (
        SELECT COUNT(delivery_id)
        FROM Delivery 
        WHERE order_date = customer_pref_delivery_date 
    ) / COUNT(*) *100, 2
) AS immediate_percentage
FROM Delivery
