/*
180. Consecutive Numbers
Author: Ognjen Arsenijevic
username: ognjen1998
*/
SELECT DISTINCT L1.NUM AS ConsecutiveNums
FROM LOGS L1, LOGS L2, LOGS L3
WHERE L1.ID=L2.ID-1 AND L1.ID=L3.ID-2 AND L1.NUM=L2.NUM AND L1.NUM=L3.NUM
