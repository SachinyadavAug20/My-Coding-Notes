#include<stdio.h>
#include<math.h>
 int area_of_square(int);
 int area_of_square(int side)
 {
    int area=side*side;
    return area;
 }

int main(){
    int a=45;
    printf("the area of square with side %d is %d\n",a,area_of_square(a));  //using user defined funtion
    printf("the area of square with side %d is %.0f\n",a,pow(a,2));  //using math.h funtion and pow returns in float
    
    return 0;
}