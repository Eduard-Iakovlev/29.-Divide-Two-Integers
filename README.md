29. Divide Two Integers

Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator.

The integer division should truncate toward zero, which means losing its fractional part. For example, 8.345 would be truncated to 8, and -2.7335 would be truncated to -2.

Return the quotient after dividing dividend by divisor.

Note: Assume we are dealing with an environment that could only store integers within the 32-bit signed integer range: [−231, 231 − 1]. For this problem, if the quotient is strictly greater than 231 - 1, then return 231 - 1, and if the quotient is strictly less than -231, then return -231.


Example 1:

Input: dividend = 10, divisor = 3
Output: 3
Explanation: 10/3 = 3.33333.. which is truncated to 3.
Example 2:

Input: dividend = 7, divisor = -3
Output: -2
Explanation: 7/-3 = -2.33333.. which is truncated to -2.
 

Constraints:

-231 <= dividend, divisor <= 231 - 1
divisor != 0

29. Деление двух целых чисел

Даны два целых числа dividend и divisor. Разделите два целых числа без использования умножения, деления и оператора остатка от деления.

Целочисленное деление должно округляться в меньшую сторону, то есть без дробной части. Например, 8.345 будет округлено до 8, а -2.7335 — до -2.

Верните то частное после деления dividend на divisor.

Примечание: Предположим, что мы имеем дело со средой, в которой можно хранить только целые числа в диапазоне 32-битных целых чисел со знаком: [−231, 231 − 1]. В этой задаче, если частное строго больше 231 - 1, то верните 231 - 1, а если частное строго меньше -231, то верните -231.

 

Пример 1:

Входные данные: делимое = 10, делитель = 3
Результат: 3
Пояснение: 10/3 = 3,33333.. результат округляется до 3.
Пример 2:

Входные данные: делимое = 7, делитель = -3
Результат: -2
Пояснение: 7/-3 = -2,33333.. результат округляется до -2.
 

Ограничения:

-231 <= dividend, divisor <= 231 - 1
divisor != 0