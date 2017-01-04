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

Vector3 Vector3::CrossProd()
{
	Vector3 cross = Vector3(y * z - z * y, x * z - z * x, z * y - z * x);
	return cross;
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





Matrix2::Matrix2(float a, float b, float c, float d)
{
	tempMatrix2[0] = a;
	tempMatrix2[1] = b;
	tempMatrix2[2] = c;
	tempMatrix2[3] = d;
}

/*

x1Tmp.x1 = (x1 * T.x1) + (x2 * T.x3);
x2Tmp.x2 = (x1 * T.x2) + (x2 * T.x4);
x3Tmp.x3 = (x3 * T.x1) + (x4 * T.x3);
x4Tmp.x4 = (x3 * T.x2) + (x4 * T.x4);

*/

Matrix2 x1Tmp, x2Tmp,
x3Tmp, x4Tmp;

Matrix2 Matrix2::operator*(const Matrix2 &t)
{

	x1Tmp.x1 = tempMatrix2[0] * t.tempMatrix2[0] + tempMatrix2[1] * t.tempMatrix2[2];
	x2Tmp.x2 = tempMatrix2[0] * t.tempMatrix2[1] + tempMatrix2[1] * t.tempMatrix2[3];
	x3Tmp.x3 = tempMatrix2[2] * t.tempMatrix2[0] + tempMatrix2[3] * t.tempMatrix2[2];
	x4Tmp.x4 = tempMatrix2[2] * t.tempMatrix2[1] + tempMatrix2[3] * t.tempMatrix2[3];
	Matrix2 MatrixMult = Matrix2(x1Tmp.x1, x2Tmp.x2,
								x3Tmp.x3, x4Tmp.x4 );
	return MatrixMult;

}


Vector2 Matrix2::operator*(const Vector2 & T)
{
	float x = ;
	float y = ;
	Vector2 tmpV = Vector2(x, y);
	return tmpV;
}





//-------------------------------------------------------------------------

//-------------------------------------------------------------------------


Matrix3::Matrix3(float a, float b, float c, float d, float e, float f, float g, float h, float i)
{
	tempMatrix3[0] = a;
	tempMatrix3[1] = b;
	tempMatrix3[2] = c;
	tempMatrix3[3] = d;
	tempMatrix3[4] = e;
	tempMatrix3[5] = f;
	tempMatrix3[6] = g;
	tempMatrix3[7] = h;
	tempMatrix3[8] = i;
}

	//x1Tmp.x1 = (x1 * T.x1) + (x2 * T.x4) + (x3 * T.x7);
	//x2Tmp.x2 = (x1 * T.x2) + (x2 * T.x5) + (x3 * T.x8);
	//x3Tmp.x3 = (x1 * T.x3) + (x2 * T.x6) + (x3 * T.x9);
	//x4Tmp.x4 = (x4 * T.x1) + (x5 * T.x4) + (x6 * T.x7);
	//x5Tmp.x5 = (x4 * T.x2) + (x5 * T.x5) + (x6 * T.x8);
	//x6Tmp.x6 = (x4 * T.x3) + (x5 * T.x6) + (x6 * T.x9);
	//x7Tmp.x7 = (x7 * T.x1) + (x8 * T.x4) + (x9 * T.x7);
	//x8Tmp.x8 = (x7 * T.x2) + (x8 * T.x5) + (x9 * T.x8);
	//x9Tmp.x9 = (x7 * T.x3) + (x8 * T.x6) + (x9 * T.x9);


Matrix3 x1Tmp, x2Tmp, x3Tmp,
x4Tmp, x5Tmp, x6Tmp,
x7Tmp, x8Tmp, x9Tmp;

Matrix3 Matrix3::operator*(const Matrix3 &t)
{

float x1 = tempMatrix3[0] * t.tempMatrix3[0] + tempMatrix3[1] * t.tempMatrix3[3] + tempMatrix3[2] * t.tempMatrix3[6];
float x2 = tempMatrix3[0] * t.tempMatrix3[1] + tempMatrix3[1] * t.tempMatrix3[4] + tempMatrix3[2] * t.tempMatrix3[7];
float x3 = tempMatrix3[0] * t.tempMatrix3[2] + tempMatrix3[1] * t.tempMatrix3[5] + tempMatrix3[2] * t.tempMatrix3[8];
float x4 = tempMatrix3[3] * t.tempMatrix3[0] + tempMatrix3[4] * t.tempMatrix3[3] + tempMatrix3[5] * t.tempMatrix3[6];
float x5 = tempMatrix3[3] * t.tempMatrix3[1] + tempMatrix3[4] * t.tempMatrix3[4] + tempMatrix3[5] * t.tempMatrix3[7];
float x6 = tempMatrix3[3] * t.tempMatrix3[2] + tempMatrix3[4] * t.tempMatrix3[5] + tempMatrix3[5] * t.tempMatrix3[8];
float x7 = tempMatrix3[7] * t.tempMatrix3[0] + tempMatrix3[8] * t.tempMatrix3[3] + tempMatrix3[9] * t.tempMatrix3[6];
float x8 = tempMatrix3[7] * t.tempMatrix3[1] + tempMatrix3[8] * t.tempMatrix3[4] + tempMatrix3[9] * t.tempMatrix3[7];
float x9 = tempMatrix3[7] * t.tempMatrix3[2] + tempMatrix3[8] * t.tempMatrix3[5] + tempMatrix3[9] * t.tempMatrix3[8];
	Matrix3 MatrixMult = Matrix3(x1, x2, x3, x4, x5, x6, x7, x8, x9);
	return MatrixMult;

}


Vector3 Matrix3 ::operator*(const Vector3 & T)
{
	float x = ;
	float y = ;
	float z = ;
	Vector3 tmpV = Vector3(x, y, z);
	return tmpV;
}

/*
1, 0, 0
0, 1, 0
0, 0, 1
*/

Matrix3 Matrix3::setRotateX(float t)
{
	Matrix3 RotateX = Matrix3
	(
	
	);
}

Matrix3 Matrix3::setRotateY(float t)
{
	Matrix3 RotateY = Matrix3
	(
		
	);

}

Matrix3 Matrix3::setRotateZ(float t)
{
	Matrix3 RotateZ = Matrix3
	(
	
	);

}




//-------------------------------------------------------------------------

//-------------------------------------------------------------------------


Matrix4::Matrix4() {};

Matrix4::Matrix4(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j, float k, float l, float m, float n, float o, float p) {
	tempMatrix4[0] = a;
	tempMatrix4[1] = b;
	tempMatrix4[2] = c;
	tempMatrix4[3] = d;
	tempMatrix4[4] = e;
	tempMatrix4[5] = f;
	tempMatrix4[6] = g;
	tempMatrix4[7] = h;
	tempMatrix4[8] = i;
	tempMatrix4[9] = j;
	tempMatrix4[10] = k;
	tempMatrix4[11] = l;
	tempMatrix4[12] = m;
	tempMatrix4[13] = n;
	tempMatrix4[14] = o;
	tempMatrix4[15] = p;
}

Matrix4 Matrix4::operator* (const Matrix4 &T)
{
	Matrix4 x1Tmp, x2Tmp, x3Tmp, x4Tmp,
		x5Tmp, x6Tmp, x7Tmp, x8Tmp,
		x9Tmp, x10Tmp, x11Tmp, x12Tmp,
		x13Tmp, x14Tmp, x15Tmp, x16Tmp;
}
Vector4 Matrix4::operator*(const Vector4 & t)
{
	return Vector4();
}
	/*
	1, 0, 0, 0,
	0, 1, 0, 0,
	0, 0, 1, 0,
	0, 0, 0, 1
	*/


	//Matrix4 Matrix4::setRotateX(float t)
	//{
	//	Matrix4 RotateX = Matrix4
	//	(

	//	);
	//}

	//Matrix4 Matrix4::setRotateY(float t)
	//{
	//	Matrix4 RotateY = Matrix4
	//	(

	//	);

	//}

	//Matrix4 Matrix4::setRotateZ(float t)
	//{
	//	Matrix4 RotateZ = Matrix4
	//	(

	//	);

	//}




	//x1Tmp.x1 = (x1 * T.x1) + (x2 * T.x5) + (x3 * T.x9) + (x4 + T.x13);
	//x2Tmp.x2 = (x1 * T.x2) + (x2 * T.x6) + (x3 * T.x10) + (x4 + T.x14);
	//x3Tmp.x3 = (x1 * T.x3) + (x2 * T.x7) + (x3 * T.x11) + (x4 + T.x15);
	//x4Tmp.x4 = (x1 * T.x4) + (x2 * T.x8) + (x3 * T.x12) + (x4 + T.x16);
	//x5Tmp.x5 = (x5 * T.x1) + (x6 * T.x5) + (x7 * T.x9) + (x8 + T.x13);
	//x6Tmp.x6 = (x5 * T.x2) + (x6 * T.x6) + (x7 * T.x10) + (x8 + T.x14);
	//x7Tmp.x7 = (x5 * T.x3) + (x6 * T.x7) + (x7 * T.x11) + (x8 + T.x15);
	//x8Tmp.x8 = (x5 * T.x4) + (x6 * T.x8) + (x7 * T.x12) + (x8 + T.x16);
	//x9Tmp.x9 = (x9 * T.x1) + (x10 * T.x5) + (x11 * T.x9) + (x12 + T.x13);
	//x10Tmp.x10 = (x9 * T.x2) + (x10 * T.x6) + (x11 * T.x10) + (x12 + T.x14);
	//x11Tmp.x11 = (x9 * T.x3) + (x10 * T.x7) + (x11 * T.x11) + (x12 + T.x15);
	//x12Tmp.x12 = (x9 * T.x4) + (x10 * T.x8) + (x11 * T.x12) + (x12 + T.x16);
	//x13Tmp.x13 = (x13 * T.x1) + (x14 * T.x5) + (x15 * T.x9) + (x16 + T.x13);
	//x14Tmp.x14 = (x13 * T.x2) + (x14 * T.x6) + (x15 * T.x10) + (x16 + T.x14);
	//x15Tmp.x15 = (x13 * T.x3) + (x14 * T.x7) + (x15 * T.x11) + (x16 + T.x15);
	//x16Tmp.x16 = (x13 * T.x4) + (x14 * T.x8) + (x15 * T.x12) + (x16 + T.x16);

}





//-------------------------------------------------------------------------