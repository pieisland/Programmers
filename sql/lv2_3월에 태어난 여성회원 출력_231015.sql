SELECT member_id, member_name, gender, date_format(date_of_birth, '%Y-%m-%d') as date_of_birth
from member_profile
where substr(date_of_birth, 7, 1) = '3' and tlno is not null and gender = 'W'
order by member_id

-- 가져갈 건, substr 인 듯. date_format은 계속 나오네.
-- substr을 쓸 때 인덱스가 1부터라는 걸 기억해야 할 듯. 그 뒤에 쓰는건 몇 개를 가져올건지 인거고.
