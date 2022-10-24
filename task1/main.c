#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	double a;
	scanf("%lf",&a);
	double x=0,y;	//y(0)=a
	y=a;
	//if输入e^n --> y=exp(a)
	//if输入pi --> double pi=acos(-1.0); y=pi;
	double h=0.001;	//定义步长 
	int i,k;
	double y_a,y_b;	 
	printf("x	y\n");
	for(i=1,k=10;i<k;i++)
	{
		x+=h;
		y_a=y;
		y*=(1-h);
		y_b=y;
		printf("%.3f	%f\n",x,y);
		if(y_a-y_b>0.001*h)	//当两个y的差小于0.001倍的步长即已收敛 
			k++;
		else
			break;
	}
	
	return 0;
}

