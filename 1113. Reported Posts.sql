/*
1113. Reported Posts
Author: Ognjen Arsenijevic
username: ognjen1998
*/
SELECT
    extra as report_reason,
    count(distinct post_id) as report_count
FROM Actions
WHERE extra IS NOT NULL AND action = 'report'
    AND action_date >='2019-07-04 00:00:00'
    AND action_date <'2019-07-05 00:00:00'
GROUP BY extra
