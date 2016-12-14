#pragma once
#include <iostream>

/*
v = Vectors		m = matrix		f = float
v = v + v		v = v - v		v = v * f		   v = m * v		m = m * m
f = v.dot(v)	v = v.cross(v)	f = v.magnitude()  v.noramlise()
m.setRotateX(f) m.setRotateY(f) m.setRotateZ(f)		mat4 + mat3
*/


/*
Classes of Math Library (No additions to this list)
Vector2
Vector3
Vector4
Matrix2
Matrix3
Matrix4
*/
 

class Vector2
{

private:
	float x, y;

public:
	Vector2() {};
	Vector2(float xx, float yy) {}

	Vector2 operator +(const Vector2 &T);
	
	Vector2 operator -(const Vector2 &T);

	Vector2 operator += (const Vector2 &T);

	Vector2 operator -= (const Vector2 &T);

	Vector2 operator *(const Vector2 &T);
	
	// Magnitude is needed for other functions in this class to work properly.
	float Magnitude(); // Function gives the squareroot of the sum of varible of type int x squared and type int y squared.
	
	// Needs to use mag to Normalise the Vector
	Vector2 Normalise();

	float DotProd(Vector2);

};

class Vector3
{

private:
	float x, y, z;

public:
	Vector3() {};
	Vector3(float xx, float yy, float zz) {}

	Vector3 operator +(const Vector3 &T);

	Vector3 operator -(const Vector3 &T);

	Vector3 operator += (const Vector3 &T);

	Vector3 operator -= (const Vector3 &T);

	Vector3 operator *(const Vector3 &T);
	
	// Magnitude is needed for other functions in this class to work properly.
	float Magnitude(); // Function gives the squareroot of the sum of varible of type int x squared type int y squared and type int z squared.
	
	Vector3 Normalise();
	
	float DotProd(Vector3);
	
};

class Vector4
{

private:
	float x, y, z, w;

public:
	Vector4() {};
	Vector4(float xx, float yy, float zz, float ww) {}

	Vector4 operator +(const Vector4 &T);

	Vector4 operator -(const Vector4 &T);

	Vector4 operator +=(const Vector4 &T);

	Vector4 operator -=(const Vector4 &T);

	Vector4 operator *(const Vector4 &T);

	// Magnitude is needed for other functions in this class to work properly.
	float Magnitude(); // Function gives the squareroot of the sum of varible of type int x squared type int y squared type int z squared and int w squared.

	Vector4 Normalise();
	 
	float DotProd(Vector4);
	
};



class Matrix2
{
private:
	float x1, x2, x3, x4;

public:
	Matrix2() {};
	Matrix2(float xx1, float xx2, float xx3, float xx4) {}

	Matrix2 operator +(const Matrix2 &T);

	Matrix2 operator -(const Matrix2 &T)
	{
		return Matrix2(x1 - T.x1, x2 - T.x2, x3 - T.x3, x4 - T.x4);
	}

	Matrix2 operator *(const Matrix2 &T)
	{
		return Matrix2(x1 * T.x1, x2 * T.x2, x3 * T.x3, x4 * T.x4);
	}
	
	//This most likely could be done in another way that is easier to understand.
	float CrossProd(Matrix2)
	{
		float x1Tmp, x2Tmp, x3Tmp, x4Tmp;
		x1Tmp = (x1 * x1) + (x2 * x3);
		x2Tmp = (x1 * x2) + (x2 * x4);
		x3Tmp = (x3 * x1) + (x4 * x3);
		x4Tmp = (x3 * x2) + (x4 * x4);
		return x1Tmp, x2Tmp, x3Tmp, x4Tmp;

	}
};



class Matrix3
{
private:
	float x1, x2, x3, x4, x5, x6, x7, x8, x9;


public:
	Matrix3() {};
	Matrix3(float xx1, float xx2, float xx3, float xx4, float xx5, float xx6, float xx7, float xx8, float xx9) {}

	Matrix3 operator +(const Matrix3 &T)
	{
		return Matrix3(x1 + T.x1, x2 + T.x2, x3 + T.x3, x4 + T.x4, x5 + T.x5, x6 + T.x6, x7 + T.x7, x8 + T.x8, x9 + T.x9);
	}

	Matrix3 operator -(const Matrix3 &T)
	{
		return Matrix3(x1 - T.x1, x2 - T.x2, x3 - T.x3, x4 - T.x4, x5 - T.x5, x6 - T.x6, x7 - T.x7, x8 - T.x8, x9 - T.x9);
	}

	Matrix3 operator *(const Matrix3 &T)
	{
		return Matrix3(x1 * T.x1, x2 * T.x2, x3 * T.x3, x4 * T.x4, x5 * T.x5, x6 * T.x6, x7 * T.x7, x8 * T.x8, x9 * T.x9);
	}

	float CrossProd(Vector2)
	{
		float x1Tmp, x2Tmp, x3Tmp, x4Tmp, x5Tmp, x6Tmp, x7Tmp, x8Tmp, x9Tmp;
		x1Tmp = (x1 * x1) + (x2 * x4) + (x3 * x7);
		x2Tmp = (x1 * x2) + (x2 * x5) + (x3 * x9);
		x3Tmp
		x4Tmp
		x5Tmp
		x6Tmp
		x7Tmp
		x8Tmp
		x9Tmp
		return x1Tmp, x2Tmp, x3Tmp, x4Tmp, x5Tmp, x6Tmp, x7Tmp, x8Tmp, x9Tmp;
	}

};



class Matrix4
{
private:
	float x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16;


public:
	Matrix4() {};
	Matrix4(float xx1, float xx2, float xx3, float xx4, float xx5, float xx6, float xx7, float xx8, float xx9, float xx10, float xx11, float xx12, float xx13, float xx14, float xx15, float xx16) {}

	Matrix4 operator +(const Matrix4 &T)
	{
		return Matrix4(x1 + T.x1, x2 + T.x2, x3 + T.x3, x4 + T.x4, x5 + T.x5, x6 + T.x6, x7 + T.x7, x8 + T.x8, x9 + T.x9, x10 + T.x10, x11 + T.x11, x12 + T.x12, x13 + T.x13, x14 + T.x14, x15 + T.x15, x16 + T.x16);
	}

	Matrix4 operator -(const Matrix4 &T)
	{
		return Matrix4(x1 - T.x1, x2 - T.x2, x3 - T.x3, x4 - T.x4, x5 - T.x5, x6 - T.x6, x7 - T.x7, x8 - T.x8, x9 - T.x9, x10 - T.x10, x11 - T.x11, x12 - T.x12, x13 - T.x13, x14 - T.x14, x15 - T.x15, x16 - T.x16);
	}

	Matrix4 operator *(const Matrix4 &T)
	{
		return Matrix4(x1 * T.x1, x2 * T.x2, x3 * T.x3, x4 * T.x4, x5 * T.x5, x6 * T.x6, x7 * T.x7, x8 * T.x8, x9 * T.x9, x10 * T.x10, x11 * T.x11, x12 * T.x12, x13 * T.x13, x14 * T.x14, x15 * T.x15, x16 * T.x16);
	}
};