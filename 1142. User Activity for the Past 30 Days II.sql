/*
1142. User Activity for the Past 30 Days II
Author: Ognjen Arsenijevic
username: ognjen1998
*/
select ifnull(round(count(distinct session_id)/count(distinct user_id),2),0.0) as average_sessions_per_user
from Activity
where activity_date >= date("2019-06-28")
and activity_date <= date("2019-07-27")
