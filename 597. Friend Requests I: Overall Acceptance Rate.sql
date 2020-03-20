/*
597. Friend Requests I: Overall Acceptance Rate
Author: Ognjen Arsenijevic
username: ognjen1998
*/
select
round(
    ifnull(
    (select count(*) from (select distinct requester_id, accepter_id from request_accepted) as a1)
    /
    (select count(*) from (select distinct sender_id, send_to_id from friend_request) as a2),
    0)
, 2) as accept_rate;
