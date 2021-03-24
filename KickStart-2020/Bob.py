# from sympy.core.cache import cacheit

# from sympy import binomial


# @cacheit
# def a(n):
#     if n == 0:
#         return 1
#     else:
#         for k in range(n):
#             return (2**binomial(n, 2) - sum(a(k)*binomial(n, k)))


# print([a(n) for n in range(21)])



# from sympy.core.cache import cacheit
# from sympy import binomial
# import sys
# sys.setrecursionlimit(20000)

# def binomialCoeff(n, k):
 
#     if k > n:
#         return 0
#     if k == 0 or k == n:
#         return 1
 
#     # Recursive Call
#     return binomialCoeff(n-1, k-1) + binomialCoeff(n-1, k)


def binomialCoeff(n,k):
    p = 1000000007
    if k > n:
        return 0

    # calculate numerator
    num = 1
    for i in range(n,n-k,-1):
        num = (num*i)%p

    # calculate denominator
    denom = 1
    for i in range(1,k+1):
        denom = (denom*i)%p

    # numerator * denominator^(p-2) (mod p)
    return (num * pow(denom,p-2,p))%p

def series_val(n): return 1 if n==0 else 2**binomialCoeff(n, 2) - sum(series_val(k)*binomialCoeff(n, k) for k in range(n))

n = int(input())
if(n >=2 and n <= 100000):
    print(series_val(n))

