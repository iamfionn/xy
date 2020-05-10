#include <cmath>
#include <cstdlib>
#include "angle.hpp"
#include "hot_start.hpp"

void hot_start(int n, Angle theta)
{
    const double pi = M_PI;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            theta(i, j) = 2 * pi * drand48() - pi; // theta in [-pi, pi].
}

