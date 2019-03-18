def solution(heights):
    result = []
    num=len(heights)
    
    while(num>0):
        k=heights[num-1]
        for i in range(num):
            j=num-1-i
            if heights[j]>k:
                result.insert(0, j+1)
                break
            if j==0 and heights[j]<=k:
                result.insert(0, 0)
        num-=1    
    return result
