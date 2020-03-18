/*
1141. User Activity for the Past 30 Days I
Author: Ognjen Arsenijevic
username: ognjen1998
*/
SELECT DISTINCT activity_date as day, COUNT( DISTINCT user_id) AS active_users
FROM Activity
WHERE activity_date BETWEEN '2019-06-28' AND '2019-07-27'
GROUP BY activity_date;
