/*
1241. Number of Comments per Post
Author: Ognjen Arsenijevic
username: ognjen1998
*/
SELECT b.sub_id AS post_id, COUNT(DISTINCT a.sub_id) AS number_of_comments
FROM Submissions a
RIGHT JOIN Submissions b
ON a.parent_id = b.sub_id
WHERE b.parent_id IS NULL
GROUP BY b.sub_id
ORDER BY post_id;
