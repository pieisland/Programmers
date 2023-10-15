select * from (
select date_format(sales_date, '%Y-%m-%d') as sales_date, product_id, user_id, sales_amount
from online_sale 
where sales_date like '2022-03%'
union all
SELECT date_format(sales_date, '%Y-%m-%d') as sales_date, product_id, NULL as user_id, sales_amount
from OFFLINE_SALE
where SALES_DATE like '2022-03%'
) a
order by a.sales_date, a.product_id, a.user_id

/*
주석이 뭔가 안 되는 느낌으로 색이 안 변하기는 한다마는, 
여기서 중요한거는 Union all 이라는 개념이고 union도 알고있음 좋음. union은 중복을 제거한다고 하네. 한 번만 나오게 해준다는 뜻인 것 같기는 함.
그리고 order by 조건을 하고싶으면 union all 한 결과를 감싸고 나서 하면 된대.
*/
