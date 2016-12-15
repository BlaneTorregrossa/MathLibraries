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

	Vector2 operator *(const float &T);

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

	Vector3 operator *(const float &T);


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

	Vector4 operator *(const float &T);


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


	Matrix2 operator *(const Matrix2 &T);
	

	//float CrossProd(Matrix2);

};



class Matrix3
{
private:
	float x1, x2, x3, x4, x5, x6, x7, x8, x9;


public:
	Matrix3() {};
	Matrix3(float xx1, float xx2, float xx3, float xx4, float xx5, float xx6, float xx7, float xx8, float xx9) {}

	
	Matrix3 operator *(const Matrix3 &T);


	//float CrossProd(Matrix3);

};



class Matrix4
{
private:
	float x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16;


public:
	Matrix4() {};
	Matrix4(float xx1, float xx2, float xx3, float xx4, float xx5, float xx6, float xx7, float xx8, float xx9, float xx10, float xx11, float xx12, float xx13, float xx14, float xx15, float xx16) {}

	
	Matrix4 operator *(const Matrix4 &T);
	

	//float CrossProd(Matrix4);

};