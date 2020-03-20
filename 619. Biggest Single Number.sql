/*
619. Biggest Single Number
Author: Ognjen Arsenijevic
username: ognjen1998
*/
select ifnull(
(select num
from my_numbers
group by num
having count(num) = 1
order by num desc limit 1),NULL) AS num
