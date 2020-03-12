/*
1378. Replace Employee ID With The Unique Identifier
Author: Ognjen Arsenijevic
username: ognjen1998
*/
SELECT unique_id, name
FROM Employees e LEFT JOIN EmployeeUNI eu
ON e.id=eu.id
