#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	double a;
	scanf("%lf",&a);
	double x=0,y;	//y(0)=a
	y=a;
	//if����e^n --> y=exp(a)
	//if����pi --> double pi=acos(-1.0); y=pi;
	double h=0.001;	//���岽�� 
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
		if(y_a-y_b>0.001*h)	//������y�Ĳ�С��0.001���Ĳ����������� 
			k++;
		else
			break;
	}
	
	return 0;
}

