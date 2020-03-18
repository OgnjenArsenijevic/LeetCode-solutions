/*
1322. Ads Performance
Author: Ognjen Arsenijevic
username: ognjen1998
*/
SELECT ad_id, IFNULL(ROUND(100*SUM(action='Clicked') / (SUM(action='Clicked')+SUM(action='Viewed')),2),0.00 )AS ctr
FROM Ads
GROUP BY ad_id
ORDER BY ctr desc, ad_id;
