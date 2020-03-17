/*
603. Consecutive Available Seats
Author: Ognjen Arsenijevic
username: ognjen1998
*/
select distinct c.seat_id
from cinema c join cinema c1
  on abs(c.seat_id - c1.seat_id) = 1
  and c.free = true and c1.free = true
order by c.seat_id
