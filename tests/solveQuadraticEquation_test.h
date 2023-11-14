#ifndef SOLVEQUADRATICEQUATION_H
#define SOLVEQUADRATICEQUATION_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "myfunc.h"
}

TEST(mysolveQuadraticEquationTest, TwoRealRoots) {
    double a = 1.0;
    double b = -3.0;
    double c = 2.0;
    double *roots = solveQuadraticEquation(a, b, c);
    ASSERT_TRUE(roots != NULL);
    ASSERT_DOUBLE_EQ(roots[0], 3.0);
    ASSERT_DOUBLE_EQ(roots[1], 1.0);
}

TEST(mysolveQuadraticEquationTest, OneRealRoot) {
    double a = 1.0, b = -4.0, c = 4.0;
    double *roots = solveQuadraticEquation(a, b, c);
    ASSERT_TRUE(roots != NULL);
    ASSERT_DOUBLE_EQ(roots[0], 2.0);
    ASSERT_DOUBLE_EQ(roots[1], 2.0);
}

TEST(mysolveQuadraticEquationTest, ComplexRoots) {
    double a = 1.0, b = 2.0, c = 5.0;
    double *roots = solveQuadraticEquation(a, b, c);
    ASSERT_TRUE(roots != NULL);
    ASSERT_DOUBLE_EQ(roots[0], 0.0);
    ASSERT_DOUBLE_EQ(roots[1], 0.0);
}

TEST(mysolveQuadraticEquationTest, NoRealRoots) {
    double a = 1.0, b = 2.0, c = 3.0;
    double *roots = solveQuadraticEquation(a, b, c);
    ASSERT_TRUE(roots != NULL);
    ASSERT_DOUBLE_EQ(roots[0], 0.0);
    ASSERT_DOUBLE_EQ(roots[1], 0.0);
}

#endif 