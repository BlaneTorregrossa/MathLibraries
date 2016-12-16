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

Vector2 Vector2::operator +=(const Vector2 &T)
{
	return Vector2(x += T.x, y += T.y);
}

Vector2 Vector2::operator -=(const Vector2 &T)
{
	return Vector2(x -= T.x, y -= T.y);
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
	return Vector3(x - T.x, y - T.y, z - T.z);
}

Vector3 Vector3::operator+=(const Vector3 & T)
{
	return Vector3(x += T.x, y += T.y, z += T.z);
}

Vector3 Vector3::operator-=(const Vector3 & T)
{
	return Vector3(x -= T.x, y -= T.y, z -= T.z);
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

Vector4 Vector4::operator+=(const Vector4 & T)
{
	return Vector4(x += T.x, y += T.y, z += T.z, w += T.w);
}

Vector4 Vector4::operator-=(const Vector4 & T)
{
	return Vector4(x -= T.x, y -= T.y, z -= T.z, w -= T.w);
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

	Matrix2 x1Tmp, x2Tmp,
			x3Tmp, x4Tmp;

	x1Tmp.x1 = (x1 * T.x1) + (x2 * T.x3);
	x2Tmp.x2 = (x1 * T.x2) + (x2 * T.x4);
	x3Tmp.x3 = (x3 * T.x1) + (x4 * T.x3);
	x4Tmp.x4 = (x3 * T.x2) + (x4 * T.x4);

	return x1Tmp, x2Tmp,
			x3Tmp, x4Tmp;

}


//Vector2 Matrix2::VecMatMult(const Vector2 &T)		// Cannot get this to work properly
//{
//	x = ((x1 * x) + (x3 * y));
//	y = ((x2 * x) + (x4 * y));
//}

//-------------------------------------------------------------------------

//-------------------------------------------------------------------------

Matrix3 Matrix3::operator* (const Matrix3 &T)
{

	Matrix3 x1Tmp, x2Tmp, x3Tmp,
			x4Tmp, x5Tmp, x6Tmp,
			x7Tmp, x8Tmp, x9Tmp;

	x1Tmp.x1 = (x1 * T.x1) + (x2 * T.x4) + (x3 * T.x7);
	x2Tmp.x2 = (x1 * T.x2) + (x2 * T.x5) + (x3 * T.x8);
	x3Tmp.x3 = (x1 * T.x3) + (x2 * T.x6) + (x3 * T.x9);
	x4Tmp.x4 = (x4 * T.x1) + (x5 * T.x4) + (x6 * T.x7);
	x5Tmp.x5 = (x4 * T.x2) + (x5 * T.x5) + (x6 * T.x8);
	x6Tmp.x6 = (x4 * T.x3) + (x5 * T.x6) + (x6 * T.x9);
	x7Tmp.x7 = (x7 * T.x1) + (x8 * T.x4) + (x9 * T.x7);
	x8Tmp.x8 = (x7 * T.x2) + (x8 * T.x5) + (x9 * T.x8);
	x9Tmp.x9 = (x7 * T.x3) + (x8 * T.x6) + (x9 * T.x9);

	return x1Tmp, x2Tmp, x3Tmp,
			x4Tmp, x5Tmp, x6Tmp,
			x7Tmp, x8Tmp, x9Tmp;

}



//Vector3 Matrix3::VecMatMult(const Vector3 &T)		// Cannot get this to work properly
//{
//	x = ((x1 * x) + (x4 * y) + (x7 * z));
//	y = ((x2 * x) + (x5 * y) + (x8 * z));
//	z = ((x3 * x) + (x6 * y) + (x9 * z));
//}

//-------------------------------------------------------------------------

//-------------------------------------------------------------------------


Matrix4 Matrix4::operator* (const Matrix4 &T)
{
	Matrix4 x1Tmp, x2Tmp, x3Tmp, x4Tmp,
			x5Tmp, x6Tmp, x7Tmp, x8Tmp,
			x9Tmp, x10Tmp, x11Tmp, x12Tmp,
			x13Tmp, x14Tmp, x15Tmp, x16Tmp;

	x1Tmp.x1 = (x1 * T.x1) + (x2 * T.x5) + (x3 * T.x9) + (x4 + T.x13);
	x2Tmp.x2 = (x1 * T.x2) + (x2 * T.x6) + (x3 * T.x10) + (x4 + T.x14);
	x3Tmp.x3 = (x1 * T.x3) + (x2 * T.x7) + (x3 * T.x11) + (x4 + T.x15);
	x4Tmp.x4 = (x1 * T.x4) + (x2 * T.x8) + (x3 * T.x12) + (x4 + T.x16);
	x5Tmp.x5 = (x5 * T.x1) + (x6 * T.x5) + (x7 * T.x9) + (x8 + T.x13);
	x6Tmp.x6 = (x5 * T.x2) + (x6 * T.x6) + (x7 * T.x10) + (x8 + T.x14);
	x7Tmp.x7 = (x5 * T.x3) + (x6 * T.x7) + (x7 * T.x11) + (x8 + T.x15);
	x8Tmp.x8 = (x5 * T.x4) + (x6 * T.x8) + (x7 * T.x12) + (x8 + T.x16);
	x9Tmp.x9 = (x9 * T.x1) + (x10 * T.x5) + (x11 * T.x9) + (x12 + T.x13);
	x10Tmp.x10 = (x9 * T.x2) + (x10 * T.x6) + (x11 * T.x10) + (x12 + T.x14);
	x11Tmp.x11 = (x9 * T.x3) + (x10 * T.x7) + (x11 * T.x11) + (x12 + T.x15);
	x12Tmp.x12 = (x9 * T.x4) + (x10 * T.x8) + (x11 * T.x12) + (x12 + T.x16);
	x13Tmp.x13 = (x13 * T.x1) + (x14 * T.x5) + (x15 * T.x9) + (x16 + T.x13);
	x14Tmp.x14 = (x13 * T.x2) + (x14 * T.x6) + (x15 * T.x10) + (x16 + T.x14);
	x15Tmp.x15 = (x13 * T.x3) + (x14 * T.x7) + (x15 * T.x11) + (x16 + T.x15);
	x16Tmp.x16 = (x13 * T.x4) + (x14 * T.x8) + (x15 * T.x12) + (x16 + T.x16);

	return x1Tmp, x2Tmp, x3Tmp, x4Tmp,
			x5Tmp, x6Tmp, x7Tmp, x8Tmp,
			x9Tmp, x10Tmp, x11Tmp, x12Tmp,
			x13Tmp, x14Tmp, x15Tmp, x16Tmp;

}


//Vector4 Matrix4::VecMatMult(const Vector4 &T)		// Cannot get this to work properly
//{
//	x = ((x1 * x) + (x5 * y) + (x9 * z) + (x13 * w));
//	y = ((x2 * x) + (x6 * y) + (x10 * z) + (x14 * w));
//	z = ((x3 * x) + (x7 * y) + (x11 * z) + (x15 * w));
//	w = ((x4 * x) + (x8 * y) + (x12 * z) + (x16 * w));
//}


//-------------------------------------------------------------------------