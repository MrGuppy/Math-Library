#pragma once
#include "Vector2.h"
class Matrix2
{
public:
	Matrix2(float a, float b, float c, float d);
	Matrix2();
	~Matrix2();

	Matrix2 operator*(const Matrix2& rhs);
	Vector2 operator*(const Vector2& rhs);

	//set rotate 
	//subscript operator
	//subscript operater returning reference
	//float fp v cast operator
	//float fp m cast operator

	float m[9];
};
