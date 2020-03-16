/*
613. Shortest Distance in a Line
Author: Ognjen Arsenijevic
username: ognjen1998
*/
SELECT MIN(ABS(p.x-p1.x)) AS shortest
FROM Point p JOIN Point p1 on p.x!=p1.x
