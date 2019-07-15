/*
177. Nth Highest Salary
Author: Ognjen Arsenijevic
username: ognjen1998
*/
CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN 
  (
      SELECT E.SALARY
      FROM EMPLOYEE E, EMPLOYEE R
      WHERE E.SALARY <= R.SALARY
      GROUP BY E.SALARY
      HAVING COUNT(DISTINCT R.SALARY) = N  
  );
END
