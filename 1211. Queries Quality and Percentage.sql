/*
1211. Queries Quality and Percentage
Author: Ognjen Arsenijevic
username: ognjen1998
*/
SELECT query_name, ROUND(AVG(rating/position),2) as quality,
ROUND(100.0*sum(if(rating<3, 1,0))/count(1),2) as poor_query_percentage
FROM Queries
GROUP BY query_name
