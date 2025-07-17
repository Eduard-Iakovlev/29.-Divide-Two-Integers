#include "Solution.h"
#include <climits>
#include <cstdint>
#include <cstdlib>

int Solution::divide(int dividend, int divisor){
    if (dividend == 0) return 0;
    if (divisor == 1) return dividend;
    if (divisor == -1) {
        if (dividend > INT_MIN) return -dividend;
        else return INT_MAX;
    }

    bool negative = (dividend < 0) ^ (divisor < 0);

    long long abs_dividend = llabs(static_cast<long long>(dividend));
    long long abs_divisor = llabs(static_cast<long long>(divisor));

    long long quotient = 0;

    while (abs_dividend >= abs_divisor) {
        int shift = 0;
        long long temp_divisor = abs_divisor;
        while ((temp_divisor << 1) <= abs_dividend) {
            temp_divisor <<= 1;
            shift++;
        }
        abs_dividend -= temp_divisor;
        quotient += (1LL << shift);
    }

    if (negative) quotient = -quotient;

    if (quotient < INT32_MIN) return INT32_MIN;
    if (quotient > INT32_MAX) return INT32_MAX;

    return static_cast<int>(quotient);
}
