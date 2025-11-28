WITH CTE AS(
    SELECT id, recordDate, temperature, LAG(temperature) OVER(ORDER BY recordDate) as prev_ 
    ,LAG(recordDate) OVER(ORDER BY recordDate) as day_
    FROM Weather;
)
SELECT id FROM CTE
WHERE temperature > prev_
AND (recordDate - day_) =1;