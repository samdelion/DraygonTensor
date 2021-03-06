#pragma once

#include <cmath>
#include <limits>

namespace ds_math
{
/**
 * This typedef is used throughout the math classes. It allows the programmer to
 * easily change the precision of math and physics calculations.
 */
typedef float scalar;

/**
 * Maximum value of a scalar.
 */
const float SCALAR_MAX = std::numeric_limits<float>::max();

/**
 * Precision of the power operator.
 */
#define SCALAR_POW powf

/**
 * Precision of the abs operator. 
 */
#define SCALAR_ABS fabs

/**
 * Precision of the square root operator.
 */
#define SCALAR_SQRT sqrtf

/**
 * How 'close' two floats need to be in order to be considered equal.
 */
const float FLOAT_ACCURACY = 10.0e-6f;
}
