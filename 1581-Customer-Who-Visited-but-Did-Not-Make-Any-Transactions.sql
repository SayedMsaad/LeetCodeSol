# Write your MySQL query statement below
select v.customer_id,count(v.customer_id) as count_no_trans 
from Visits v left JOIN Transactions t
on v.visit_id = t.visit_id 
where transaction_id is NULL
group by customer_id;