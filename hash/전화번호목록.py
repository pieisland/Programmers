"""
어떤 한 문장이 다른 문장의 접두사가 될 수 있는지 판별.
2중 for문을 쓰지 않아도 풀 수 있더라.
파이썬의 기능들을 알아야 할 듯.
"""

def solution(phone_book):
    answer=True
    
    for i in range(len(phone_book)):
        for j in range(len(phone_book)):
            if i==j: continue
            if phone_book[i].startswith(phone_book[j]):
                return False
            """
            length=0
            if len(phone_book[i])<len(phone_book[j]):
                length=len(phone_book[i])
            else: length=len(phone_book[j])
            c=0
            for k in range(length):
                if phone_book[i][k]==phone_book[j][k]:
                    c+=1
            if c==length:
                answer=False"""
    return answer
