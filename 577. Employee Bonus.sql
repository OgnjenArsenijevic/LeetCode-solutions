/*
577. Employee Bonus
Author: Ognjen Arsenijevic
username: ognjen1998
*/
select name, bonus
from Employee e left join Bonus b on e.empId=b.empId
group by name
having bonus < 1000 or bonus is NULL
