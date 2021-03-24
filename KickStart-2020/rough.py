from sympy.core.cache import cacheit
from sympy import binomial

print(binomial(500, 2))



def fac(b):
    if b==1:
        return 1
    else:
        return b * fac(b-1)

def combinations(n,k):
    result = (fac(n)) / (fac(k) * fac(n-k))
    return result



print(500, 2, combinations(500,2))