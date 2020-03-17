/*
610. Triangle Judgement
Author: Ognjen Arsenijevic
username: ognjen1998
*/
select x,y,z,
case
    when x+y>z and x+z>y and z+y>x then 'Yes'
    else 'No'
end
as 'triangle'
from triangle
