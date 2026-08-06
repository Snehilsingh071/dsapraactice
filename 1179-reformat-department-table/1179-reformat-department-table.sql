# Write your MySQL query statement below
SELECT id, 
    sum(IF(month="Jan", revenue, NULL)) AS Jan_Revenue, 
    sum(IF(month="Feb", revenue, NULL)) AS Feb_Revenue, 
    sum(IF(month="Mar", revenue, NULL)) AS Mar_Revenue,
    sum(IF(month="Apr", revenue, NULL)) AS Apr_Revenue,
    sum(IF(month="May", revenue, NULL)) AS May_Revenue,
    sum(IF(month="Jun", revenue, NULL)) AS Jun_Revenue,
    sum(IF(month="Jul", revenue, NULL)) AS Jul_Revenue,
    sum(IF(month="Aug", revenue, NULL)) AS Aug_Revenue,
    sum(IF(month="Sep", revenue, NULL)) AS Sep_Revenue,
    sum(IF(month="Oct", revenue, NULL)) AS Oct_Revenue,
    sum(IF(month="Nov", revenue, NULL)) AS Nov_Revenue,
    sum(IF(month="Dec", revenue, NULL)) AS Dec_Revenue
    
FROM Department
GROUP BY id
ORDER BY id