/*
596. Classes More Than 5 Students
Author: Ognjen Arsenijevic
username: ognjen 1998
*/
SELECT CLASS
FROM COURSES
GROUP BY CLASS
HAVING (COUNT(DISTINCT STUDENT)) > 4
