/*
627. Swap Salary
Author: Ognjen Arsenijevic
username: ognjen 1998
*/
UPDATE SALARY
SET SEX = CASE SEX
WHEN 'm' THEN 'f'
WHEN 'f' THEN 'm'
END
