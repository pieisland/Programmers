def solution(citations):
    citations.sort()
       
    num=len(citations)
    ans=0
    k=0
    while(k<=citations[-1]):
        for i in range(num):
            if k>citations[i]:
                continue
            if i+1<=k and k<=num-i:
                ans=k
        k+=1    
    return ans
