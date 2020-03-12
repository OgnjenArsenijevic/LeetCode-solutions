/*
511. Game Play Analysis I
Author: Ognjen Arsenijevic
username: ognjen1998
*/
SELECT player_id, MIN(event_date) first_login
FROM Activity
GROUP BY player_id
