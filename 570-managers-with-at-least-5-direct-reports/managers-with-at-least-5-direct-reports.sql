# Write your MySQL query statement below
SELECT e.name FROM Employee AS e
JOIN (
    SELECT managerId, COUNT(*) AS directReports
    FROM Employee
    GROUP BY managerId
    HAVING COUNT(*) >= 5
) AS e1 ON e.id = e1.managerId;