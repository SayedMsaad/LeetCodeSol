# Write your MySQL query statement below
SELECT b.product_name,a.year,a.price from Sales a join Product b ON a.product_id=b.product_id;