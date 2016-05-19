#include <ctest.h>
#include <qwrt.h>

CTEST(qwrt_suite, zero)
{
    const double a = 0, b = 0, c = 0;
    double d, x1, x2;

    const int result = qwrt(a, b, c, &d, &x1, &x2), exp_result = -1;

    ASSERT_EQUAL(exp_result, result);
}