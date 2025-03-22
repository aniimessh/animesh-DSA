# Write your MySQL query statement below
SELECT w.id from Weather AS w JOIN Weather as we ON DATEDIFF(w.recordDate, we.recordDate) = 1 WHERE w.temperature > we.temperature;   