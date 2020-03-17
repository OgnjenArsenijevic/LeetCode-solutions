/*
1076. Project Employees II
Author: Ognjen Arsenijevic
username: ognjen1998
*/
select project_id
from Project p join Employee e on p.employee_id=e.employee_id
group by project_id
having count(p.employee_id)>=all(select count(p.employee_id)
from Project p join Employee e on p.employee_id=e.employee_id
                                          group by project_id )
