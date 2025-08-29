# Write your MySQL query statement below
SELECT 
    e.name,
    b.bonus
FROM Employee e LEFT JOIN Bonus b
USING(empId)
WHERE b.bonus<1000 OR b.Bonus IS NULL;