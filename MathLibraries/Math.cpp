#include<iostream>
#include "Math.h"

Vector2 Vector2::operator+(const Vector2 & T)
{
	return Vector2(x + T.x, y + T.y);
}

Vector2 Vector2::operator-(const Vector2 & T)
{
	return Vector2(x - T.x, y - T.y);
}

Vector2 Vector2::operator*(const float &T)
{

	return Vector2(x * T, y * T);
}

float Vector2::Magnitude()
{
	float mag = sqrt((x * x) + (y * y));
	return mag;
}

Vector2 Vector2::Normalise()
{
	x = (x / Magnitude());
	y = (y / Magnitude());
}

float Vector2::DotProd(Vector2)
{
	float dot = (x * x) + (y * y);
	return dot;
}


//-------------------------------------------------------------------------

//-------------------------------------------------------------------------

Vector3 Vector3::operator+(const Vector3 & T)
{
	return Vector3(x + T.x, y + T.y, z + T.z);
}

Vector3 Vector3::operator-(const Vector3 & T)
{
	return Vector3(x - T.x, y - T.y, z + T.z);
}

Vector3 Vector3::operator*(const float & T)
{
	return Vector3(x * T, y * T, z * T);
}

float Vector3::Magnitude()
{
	float mag = sqrt((x * x) + (y * y) + (z * z));
	return mag;
}

Vector3 Vector3::Normalise()
{
	x = (x / Magnitude());
	y = (y / Magnitude());
	z = (z / Magnitude());
}

float Vector3::DotProd(Vector3)
{
	float dot = (x * x) + (y * y) + (z * z);
	return dot;
}


//-------------------------------------------------------------------------

//-------------------------------------------------------------------------


Vector4 Vector4::operator+(const Vector4 & T)
{
	return Vector4(x + T.x, y + T.y, z + T.z, w + T.w);
}

Vector4 Vector4::operator-(const Vector4 & T)
{
	return Vector4(x - T.x, y - T.y, z - T.z, w - T.w);
}

Vector4 Vector4::operator*(const float & T)
{
	return Vector4(x * T, y * T, z * T, w * T);
}

float Vector4::Magnitude()
{
	float mag = sqrt((x * x) + (y * y) + (z * z) + (w * w));
	return mag;
}

Vector4 Vector4::Normalise()
{
	x = (x / Magnitude());
	y = (y / Magnitude());
	z = (z / Magnitude());
	w = (w / Magnitude());
}

float Vector4::DotProd(Vector4)
{
	float dot = (x * x) + (y * y) + (z * z) + (w * w);
	return dot;
}


//-------------------------------------------------------------------------

//-------------------------------------------------------------------------




Matrix2 Matrix2::operator* (const Matrix2 &T)
{
	return Matrix2((x1 * T.x1) + (x2 * T.x3), (x1 * T.x2) + (x2 * T.x4),	// row 1
		(x3 * T.x1) + (x4 * T.x3), (x3 * T.x2) + (x4 * T.x4));				// row 2
}


//-------------------------------------------------------------------------

//-------------------------------------------------------------------------


Matrix3 Matrix3::operator* (const Matrix3 &T)
{
	return Matrix3((x1 * T.x1) + (x2 * T.x4) + (x3 * T.x7), (x1 * T.x2) + (x2 * T.x5) + (x3 * T.x8), (x1 * T.x3) + (x2 * T.x6) + (x3 * T.x9),	// row 1
		(x4 * T.x1) + (x5 * T.x4) + (x6 * T.x7), (x4 * T.x2) + (x5 * T.x5) + (x6 * T.x8), (x4 * T.x3) + (x5 * T.x6) + (x6 * T.x9),				// row 2
		(x7 * T.x1) + (x8 * T.x4) + (x9 * T.x7), (x7 * T.x2) + (x8 * T.x5) + (x9 * T.x8), (x7 * T.x3) + (x8 * T.x6) + (x9 * T.x9));				// row 3
}


//-------------------------------------------------------------------------

//-------------------------------------------------------------------------


Matrix4 Matrix4::operator* (const Matrix4 &T)
{
	return Matrix4((x1 * T.x1) + (x2 * T.x5) + (x3 * T.x9) + (x4 * T.x13), (x1 * T.x2) + (x2 * T.x6) + (x3 * T.x10) + (x4 * T.x14), (x1 * T.x3) + (x2 * T.x7) + (x3 * T.x11) + (x4 * T.x15), (x1 * T.x4) + (x2 * T.x8) + (x3 * T.x12) + (x4 * T.x16),		// row 1
		(x5 * T.x1) + (x6 * T.x5) + (x7 * T.x9) + (x8 * T.x13), (x5 * T.x2) + (x6 * T.x6) + (x7 * T.x10) + (x8 * T.x14), (x5 * T.x3) + (x6 * T.x7) + (x7 * T.x11) + (x8 * T.x15), (x5 * T.x4) + (x6 * T.x8) + (x7 * T.x12) + (x8 * T.x16),					// row 2
		(x9 * T.x1) + (x10 * T.x5) + (x11 * T.x9) + (x12 * T.x13), (x9 * T.x2) + (x10 * T.x6) + (x11 * T.x10) + (x12 * T.x14), (x9 * T.x3) + (x10 * T.x7) + (x11 * T.x11) + (x12 * T.x15), (x9 * T.x4) + (x10 * T.x8) + (x11 * T.x12) + (x12 * T.x16),		// row 3
		(x13 * T.x1) + (x14 * T.x5) + (x15 * T.x9) + (x16 * T.x13), (x13 * T.x2) + (x14 * T.x6) + (x15 * T.x10) + (x16 * T.x14), (x13 * T.x3) + (x14 * T.x7) + (x15 * T.x11) + (x16 * T.x15), (x13 * T.x4) + (x14 * T.x8) + (x15 * T.x12) + (x16 * T.x16));	// row 4
}



//-------------------------------------------------------------------------