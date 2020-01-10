/*
1179. Reformat Department Table
Author: Ognjen Arsenijevic
username: ognjen1998
*/
select Department.id, 
SUM(CASE WHEN Department.month  ='Jan' THEN Department.revenue END) as Jan_Revenue,
SUM(CASE WHEN Department.month  ='Feb' THEN Department.revenue  END) AS Feb_Revenue,
SUM(CASE WHEN Department.month  ='Mar' THEN Department.revenue  END) AS Mar_Revenue,
SUM(CASE WHEN Department.month  ='Apr' THEN Department.revenue  END) AS Apr_Revenue,
SUM(CASE WHEN Department.month  ='May' THEN Department.revenue  END) AS May_Revenue,
SUM(CASE WHEN Department.month  ='Jun' THEN Department.revenue  END) AS Jun_Revenue,
SUM(CASE WHEN Department.month  ='Jul' THEN Department.revenue  END) AS Jul_Revenue,
SUM(CASE WHEN Department.month  ='Aug' THEN Department.revenue  END) AS Aug_Revenue,
SUM(CASE WHEN Department.month  ='Sep' THEN Department.revenue  END) AS Sep_Revenue,
SUM(CASE WHEN Department.month  ='Oct' THEN Department.revenue  END) AS Oct_Revenue,
SUM(CASE WHEN Department.month  ='Nov' THEN Department.revenue  END) AS Nov_Revenue,
Sum(CASE WHEN Department.month  ='Dec' THEN Department.revenue  END) AS Dec_Revenue From Department
GROUP BY Department.id
