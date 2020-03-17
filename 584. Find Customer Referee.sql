/*
584. Find Customer Referee
Author: Ognjen Arsenijevic
username: ognjen1998
*/
SELECT name
FROM customer
WHERE referee_id IS NULL OR referee_id!=2
