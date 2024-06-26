SELECT address,
       round(max(age)::NUMERIC - (min(age)::NUMERIC / max(age)::NUMERIC), 2) AS formula,
       round(avg(age), 2)                                                    AS average,
       MAX(age) - (MIN(age) / MAX(age)) > AVG(age)                           AS comparison
FROM person
GROUP BY address
ORDER BY address;
