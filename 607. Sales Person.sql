/*
607. Sales Person
Author: Ognjen Arsenijevic
username: ognjen1998
*/
SELECT name
  FROM salesperson
WHERE sales_id NOT IN (
    SELECT sales_id
      FROM orders AS o
      JOIN company AS c
      ON o.com_id = c.com_id AND c.name = 'RED');
