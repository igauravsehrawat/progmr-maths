//area_of_polygon.cpp
#include<cmath>
#include<iostream>

using namespace std;

struct Point{
	double x;
	double y;
};

double cross_product(Point first,Point second){
	return (first.x*second.y-first.y*second.x);
}

int main()
{
	int n;double result=0;
	Point vertices[n];
	cin >> n;
	for(int i = 0;i < n;i++){
		cin>> vertices[i].x >> vertices[i].y ;
	}
	cout << abs(cross_product(vertices[0],vertices[1])) << endl;
	for(int j = 0;j<n;j++){
		result = result + cross_product(vertices[j],vertices[(j+1)%n]) ;
		cout << result << abs(cross_product(vertices[j],vertices[(j+1)%n])) << endl;

	}
	cout << abs(result/2) << endl;

return 0;	
}