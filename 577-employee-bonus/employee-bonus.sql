# Write your MySQL query statement below
SELECT E.name, B.bonus from Employee AS E
LEFT JOIN Bonus AS B ON E.empId = B.empID
WHERE IFNULL(B.bonus, 0) < 1000; 