/*
1084. Sales Analysis III
Author: Ognjen Arsenijevic
username: ognjen1998
*/
select
    product_id,
    product_name
from product 
where product_id not in 
    (
        select 
            p.product_id 
        from product p
        left join sales s
        on p.product_id = s.product_id
        where sale_date < '2019-01-01'
        or sale_date > '2019-03-31'        
    )
