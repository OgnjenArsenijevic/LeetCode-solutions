/*
620. Not Boring Movies
Author: Ognjen Arsenijevic
username: ognjen 1998
*/
SELECT *
FROM CINEMA
WHERE MOD(ID,2)=1 AND DESCRIPTION NOT LIKE 'boring'
ORDER BY RATING DESC
