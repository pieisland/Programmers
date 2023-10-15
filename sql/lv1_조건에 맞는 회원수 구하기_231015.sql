SELECT count(*) as users
from user_info
where joined like '2021%'-- and age >= 20 and age <= 29
and age between 20 and 29

-- between이 포함인지 아닌지를 모르겠어서 쓰기 힘들 것 같으면... 그냥 쓰는 게 낫고
-- between 구문은 between a and b 라는 걸 기억하고, a랑 b 모두 포함된다는 걸 알아야 할 듯.
