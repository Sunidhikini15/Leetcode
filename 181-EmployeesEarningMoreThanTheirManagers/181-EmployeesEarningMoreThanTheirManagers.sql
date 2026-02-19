-- Last updated: 2/19/2026, 6:14:08 PM
# Write your MySQL query statement below
SELECT e1.name as Employee
FROM Employee e1
JOIN Employee e2 ON e1.managerId=e2.id
WHERE e1.salary>e2.salary;