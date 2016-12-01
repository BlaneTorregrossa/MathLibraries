#pragma once

/*
Currently working on:
Fixing problems with classes in the Math Libraries Vectors

Stopping point was:
Getting the classes to where they were before break/last time I worked on these.
*/

/*
v = Vectors		m = matrix		f = float
v = v + v		v = v - v		v = v * f		   v = m * v		m = m * m
f = v.dot(v)	v = v.cross(v)	f = v.magnitude()  v.noramlise()
m.setRotateX(f) m.setRotateY(f) m.setRotateZ(f)		mat4 + mat3
*/

/*
NOTE:
No templating with the matracies.
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

	Vector2 operator +(const Vector2 &T)
	{
		return Vector2(x + T.x, y + T.y);
	}

	Vector2 operator -(const Vector2 &T)
	{
		return Vector2(x - T.x, y - T.y);
	}

	Vector2 operator *(const Vector2 &T)
	{
		return Vector2(x * T.x, y * T.y);
	}
	
	// Need to use magnitude for normalising!!!
	float Magnitude() // Function gives the squareroot of the sum of varible of type int x squared and type int y squared
	{
		return sqrt ((x * x) + (y * y));
	}

	// v.noramlise()

	
};

class Vector3
{

private:
	float x, y, z;

public:
	Vector3() {};
	Vector3(float xx, float yy, float zz) {}

	Vector3 operator +(const Vector3 &T)
	{
		return Vector3(x + T.x, y + T.y, z + T.z);
	}

	Vector3 operator -(const Vector3 &T)
	{
		return Vector3(x - T.x, y - T.y, z - T.z);
	}

	Vector3 operator *(const Vector3 &T)
	{
		return Vector3(x * T.x, y * T.y, z * T.z);
	}

	float Magnitude()
	{
		return sqrt((x * x) + (y * y) + (z * z));
	}

};

class Vector4
{

private:
	float x, y, z, w;

public:
	Vector4() {};
	Vector4(float xx, float yy, float zz, float ww) {}

	Vector4 operator +(const Vector4 &T)
	{
		return Vector4(x + T.x, y + T.y, z + T.z, w + T.w);
	}

	Vector4 operator -(const Vector4 &T)
	{
		return Vector4(x - T.x, y - T.y, z - T.z, w - T.w);
	}

	Vector4 operator *(const Vector4 &T)
	{
		return Vector4(x * T.x, y * T.y, z * T.z, w * T.w);
	}

	float Magnitude()
	{
		return sqrt((x * x) + (y * y) + (z * z) + (w + w));
	}

};