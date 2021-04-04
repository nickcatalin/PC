#include <stdio.h>
#include <math.h>
void triunghi1(float v1[],float v2[])
{
    v2[0]=acos((v1[1]*v1[1]+v1[2]*v1[2]-v1[0]*v1[0])/(2*v1[1]*v1[2]))*(180/M_PI);
    v2[1]=acos((v1[0]*v1[0]+v1[2]*v1[2]-v1[1]*v1[1])/(2*v1[0]*v1[2]))*(180/M_PI);
    v2[2]=acos((v1[1]*v1[1]+v1[0]*v1[0]-v1[2]*v1[2])/(2*v1[0]*v1[1]))*(180/M_PI);

}
void triunghi2(float a,float b,float c, float *A,float *B, float *C)
{
    *A=acos((b*b+c*c-a*a)/(2*b*c))*(180/M_PI);
    *B=acos((a*a+c*c-b*b)/(2*a*c))*(180/M_PI);
    *C=acos((b*b+a*a-c*c)/(2*a*b))*(180/M_PI);
}
int main(){

    float v1[100],v2[100],a,b,c,A,B,C;
scanf("%f%f%f",&v1[0],&v1[1],&v1[2]);
a=v1[0];
b=v1[1];
c=v1[2];
    triunghi1(v1,v2);
    triunghi2(a,b,c,&A,&B,&C);

printf("%.3f %.3f %.3f\n",v2[0],v2[1],v2[2]);
printf("%.3f %.3f %.3f",A,B,C);

    return 0;
}
