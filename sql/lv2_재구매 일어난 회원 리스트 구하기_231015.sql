SELECT user_id, product_id -- , count(*) as cnt
from online_sale
group by user_id, product_id
having count(*) > 1
order by user_id, product_id desc

-- group by 로 묶인 애들애 대해서는 조건을 무조건 having으로 하는 게 옳은 걸까..
