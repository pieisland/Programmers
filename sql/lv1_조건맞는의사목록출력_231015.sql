SELECT dr_name, dr_id, mcdp_cd, date_format(hire_ymd, '%Y-%m-%d') hire_ymd
from doctor
-- where mcdp_cd = 'CS' or mcdp_cd = 'GS'
where mcdp_cd in ('CS', 'GS')
order by hire_ymd desc, dr_name

-- 처음에 실행할 때 in 이 안 되길래 안 되는 건줄 알아서.. 당황했다..ㅍ
