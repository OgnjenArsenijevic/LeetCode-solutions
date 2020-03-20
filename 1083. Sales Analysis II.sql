/*
1083. Sales Analysis II
Author: Ognjen Arsenijevic
username: ognjen1998
*/
select distinct(buyer_id)
from Sales s join Product p on s.product_id = p.product_id
where product_name = 's8' and buyer_id not in
(select buyer_id
from Sales ss join Product pp on ss.product_id = pp.product_id
where product_name = 'iPhone')
