# Write your MySQL query statement below
SELECT Eui.unique_id, E.name 
from Employees as E 
LEFT JOIN EmployeeUNI AS Eui ON E.id = Eui.id;