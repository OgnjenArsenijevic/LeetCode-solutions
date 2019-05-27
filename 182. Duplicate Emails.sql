/*
182. Duplicate Emails
Author: Ognjen Arsenijevic
username: ognjen 1998
*/
SELECT EMAIL
FROM PERSON
GROUP BY EMAIL
HAVING COUNT(ID)>1
e
