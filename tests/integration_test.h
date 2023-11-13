#ifndef INTEGRATION_H
#define INTEGRATION_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <math.h>

extern "C" {
#include "myfunc.h"
}

TEST(integrationTest, sqrtFibonachi) {

    double* roots = solveQuadraticEquation(fibonachi(6), -22, 14);

    double expectedRoot1 = 1.75;
    double expectedRoot2 = 1.00; 

    ASSERT_EQ(roots[0], expectedRoot1);
    ASSERT_EQ(roots[1], expectedRoot2);

    free(roots);
}



#endif // INTEGRATION_H