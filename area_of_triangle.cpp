//area_of_triangle.cpp
#include<cmath>
#include<iostream>

using namespace std;

//ds for sides of the triangle
struct point{
	double x;
	double y;
};

double area_of_triangle(point a,point b,point c)
{
	return abs((a.x*b.y-a.y*b.x)+(b.x*c.y-b.y*c.x)+(c.x*a.y-c.y*a.x))/2.0;
}
double cross_product(point first, point second){
	return (first.x*second.y-first.y*second.x);
}

int main()
{	//init
	point a, b, c;double result;
	//input
	cin >> a.x >>  a.y;
	cin >> b.x  >> b.y;
	cin >> c.x >>  c.y;
	
	//print result 
	cout << area_of_triangle(a,b,c) << endl;
	result=abs(cross_product(a,b)+cross_product(b,c)+cross_product(c,a))/2;
	if (result>0){
		cout << result << endl;
		}
	else
		cout << "Triangle formation is not possible !!" << endl;
	return 0;
}