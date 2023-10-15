SELECT a.rest_id, a.rest_name, a.food_type, a.favorites, a.address, round(sum(b.review_score)/count(*), 2) as score
from rest_info a join rest_review b using(rest_id)
group by(a.rest_id)
having substr(a.address, 1, 2) = '서울'
order by score desc, a.favorites desc

-- 근데 진짜 group by 는 having만 씀? where 를 못 씀..??
-- substr이 너무 헷갈림. 시작하는 위치가 0이 아니고 1부터이고 뒤에 쓰는 건 몇 개 가져올거냐 이거임.. 잊지 마셈.
-- join을 해도 문제가 없는게 맞는건가 근데.. 끙......
