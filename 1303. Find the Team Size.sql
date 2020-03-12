/*
1303. Find the Team Size
Author: Ognjen Arsenijevic
username: ognjen1998
*/
SELECT e1.employee_id,
(SELECT COUNT(e2.employee_id) FROM Employee AS e2 WHERE e2.team_id = e1.team_id) AS team_size
FROM Employee e1
