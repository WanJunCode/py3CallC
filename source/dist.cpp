#include <cmath>
#include <iostream>
using namespace std;
 
extern "C" float Dist(float ax,float ay,float az,float bx,float by,float bz){       
	return	(sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by)+(az-bz)*(az-bz)));
}

extern "C" int sum(int a,int b){
	return a+b;
}

extern "C" void print(int num){      
	printf("num is [%d]\n",num);
}