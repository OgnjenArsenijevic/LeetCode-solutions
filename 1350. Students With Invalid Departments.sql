/*
1350. Students With Invalid Departments
Author: Ognjen Arsenijevic
username: ognjen1998
*/
SELECT id, name FROM Students
WHERE department_id NOT IN (SELECT id FROM Departments)
