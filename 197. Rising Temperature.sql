/*
197. Rising Temperature
Author: Ognjen Arsenijevic
username: ognjen 1998
*/
SELECT W1.ID
FROM WEATHER W1 JOIN WEATHER W2 ON(W1.RECORDDATE=W2.RECORDDATE+1)
WHERE W1.TEMPERATURE > W2.TEMPERATURE