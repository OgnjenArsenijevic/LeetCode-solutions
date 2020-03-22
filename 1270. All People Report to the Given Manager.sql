/*
1270. All People Report to the Given Manager
Author: Ognjen Arsenijevic
username: ognjen1998
*/
select e.employee_id
from Employees e
where e.employee_id != 1 and
(e.manager_id = 1 or e.manager_id in
(select employee_id from Employees where manager_id = 1 or manager_id in
(select employee_id from Employees where manager_id = 1 )));
