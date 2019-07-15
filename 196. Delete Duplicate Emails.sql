/*
196. Delete Duplicate Emails
Author: Ognjen Arsenijevic
username: ognjen 1998
*/
DELETE 
FROM PERSON 
WHERE ID NOT IN 
(SELECT * FROM(SELECT MIN(ID) FROM PERSON GROUP BY EMAIL) AS P);
