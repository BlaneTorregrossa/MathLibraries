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

Vector2 Vector2::operator += (const Vector2 & T)
{
	return Vector2(x += T.x, y += T.y);
}

Vector2 Vector2::operator -= (const Vector2 & T)
{
	return Vector2(x -= T.x, y -= T.y);
}

Vector2 Vector2::operator*(const Vector2 &T)
{
	return Vector2(x * T.x, y * T.y);
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


Vector3 Vector3::operator+(const Vector3 & T)
{
	return Vector3(x + T.x, y + T.y, z + T.z);
}

Vector3 Vector3::operator-(const Vector3 & T)
{
	return Vector3(x - T.x, y - T.y, z + T.z);
}

Vector3 Vector3::operator+=(const Vector3 & T)
{
	return Vector3(x += T.x, y += T.y, z += T.z);
}

Vector3 Vector3::operator-=(const Vector3 & T)
{
	return Vector3(x -= T.x, y -= T.y, z -= T.z);
}

Vector3 Vector3::operator*(const Vector3 & T)
{
	return Vector3(x * T.x, y * T.y, z * T.z);
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


Vector4 Vector4::operator+(const Vector4 & T)
{
	return Vector4(x + T.x, y + T.y, z + T.z, w + T.w);
}

Vector4 Vector4::operator-(const Vector4 & T)
{
	return Vector4(x - T.x, y - T.y, z - T.z, w - T.w);
}

Vector4 Vector4::operator+=(const Vector4 & T)
{
	return Vector4(x += T.x, y += T.y, z += T.z, w += T.w);
}

Vector4 Vector4::operator-=(const Vector4 & T)
{
	return Vector4(x -= T.x, y -= T.y, z -= T.z, w -= T.w);
}

Vector4 Vector4::operator*(const Vector4 & T)
{
	return Vector4(x * T.x, y * T.y, z * T.z, w * T.w);
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


Matrix2 Matrix2::operator +(const Matrix2 &T)
{
	return Matrix2(x1 + T.x1, x2 + T.x2, x3 + T.x3, x4 + T.x4);
}

//-------------------------------------------------------------------------


//Matrix3


//-------------------------------------------------------------------------


//Matrix4


//-------------------------------------------------------------------------