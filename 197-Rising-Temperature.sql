# Write your MySQL query statement below
SELECT w.id as Id from Weather w join Weather x on w.recordDate=DATE_ADD(x.recordDate,INTERVAL 1 DAY)where w.temperature>x.temperature; 