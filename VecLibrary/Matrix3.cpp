#include "Matrix3.h"

Matrix3::Matrix3(float a, float b, float c, float d, float e, float f, float g, float h, float i)
{
	m[0] = a;
	m[1] = b;
	m[2] = c;
	m[3] = d;
	m[4] = e;
	m[5] = f;
	m[6] = g;
	m[7] = h;
	m[8] = i;
}

Matrix3::Matrix3()
{
}

Matrix3::~Matrix3()
{
}

Matrix3 Matrix3::operator*(const Matrix3 & rhs)
{
	Matrix3 result;
	result.m[0] = m[0] * rhs.m[0] + m[3] * rhs.m[1] + m[6] * rhs.m[2];
	result.m[1] = m[1] * rhs.m[0] + m[4] * rhs.m[1] + m[7] * rhs.m[2];
	result.m[2] = m[2] * rhs.m[0] + m[5] * rhs.m[1] + m[8] * rhs.m[2];

	result.m[3] = m[0] * rhs.m[3] + m[3] * rhs.m[4] + m[6] * rhs.m[5];
	result.m[4] = m[1] * rhs.m[3] + m[4] * rhs.m[4] + m[7] * rhs.m[5];
	result.m[5] = m[2] * rhs.m[3] + m[5] * rhs.m[4] + m[8] * rhs.m[5];

	result.m[6] = m[0] * rhs.m[6] + m[3] * rhs.m[7] + m[6] * rhs.m[8];
	result.m[7] = m[1] * rhs.m[6] + m[4] * rhs.m[7] + m[7] * rhs.m[8];
	result.m[8] = m[2] * rhs.m[6] + m[5] * rhs.m[7] + m[8] * rhs.m[8];

	return result;
}

Vector3 Matrix3::operator*(const Vector3 & rhs)
{
	return Vector3();
}
