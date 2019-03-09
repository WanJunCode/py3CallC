#include <stdio.h>
#include <string.h>
#include <string>
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

extern "C" char *getName(char *name){
    printf("name is [%s]\n",name);
    std::string name_str(name);
    std::string res = "-$-" + name_str;
    printf("return [%s]\n",res.data());
    return (char *)res.data();
}