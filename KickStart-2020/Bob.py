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



from sympy.core.cache import cacheit
from sympy import binomial

def series_val(n): return 1 if n==0 else 2**binomial(n, 2) - sum(series_val(k)*binomial(n, k) for k in range(n))

n = int(input())
print(series_val(n))