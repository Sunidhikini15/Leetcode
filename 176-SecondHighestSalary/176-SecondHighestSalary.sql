-- Last updated: 2/19/2026, 6:14:05 PM
# Write your MySQL query statement below
SELECT(
    SELECT DISTINCT salary
    FROM Employee
    ORDER BY salary DESC
    LIMIT 1 OFFSET 1
)AS SecondHighestSalary;