#include <stdio.h>
float ac(float x);
float at(float x,float y);
float ar(float x,float y);
float cc(float x);
float pt(float x,float y,float z);
float pr(float x,float y);




float ac(float x){
    printf("Area is : %.2f",3.14*x*x);
    return 0;
}
float at(float x,float y){
    printf("Area is : %.2f",1/2*x*y);
    return 0;
}
float ar(float x,float y){
    printf("Area is :%.2f",x*y);
    return 0;
}
float cc(float x){
    printf("circumference is :%.2f",2*3.14*x);
    return 0;
}
float pt(float x,float y,float z){
    printf("perimetre is :%.2f",x+y+z);
    return 0;
}
float pr(float x,float y){
    printf("perimeter is :%.2f",2*(x+y));
    return 0;
}






int main() {
    float a,b,c;
    int ch;
    printf("*********sage indore ************\n");
    printf("      1.area of circle \n");
    printf("      2.area of triangle \n");
    printf("      3.area of rectangle \n");
    printf("      4.circumference  of circle \n");
    printf("      5.perimeter of triangle \n");
    printf("      6.perimter  of rectangle \n");
    printf("      7.Exit \n");
    printf("**********************************\n");
    printf("Enter your choice :");
    scanf("%d",&ch);
    switch(ch){
        case 1:{
            printf("Enter the radius :");
            scanf("%f",&a);
            ac(a);   //function of area of circle 
        };break;
        case 2:{
            printf("Enter the base :");
            scanf("%f",&a);
            printf("ENter the height :");
            scanf("%f",&b);
            at(a,b);  //function area of triangle 
        };break;
        case 3:{
            printf("Enter the length :");
            scanf("%f",&a);
            printf("Enter the hight :");
            scanf("%f",&b);
            ar(a,b);  //functiuon of area rectangle
        };break;
        case 4:{
            printf("Enter the radius :");
            scanf("%f",&a);
            cc(a);    //function of cir of circle
        };break;
        case 5:{
            printf("Enter the first side :");
            scanf("%f",&a);
            printf("Enter the second side  :");
            scanf("%f",&b);
            printf("Enter the third side  :");
            scanf("%f",&c);
            pt(a,b,c);   //function of perimetre of triangle
        };break;
        case 6:{
            printf("Enter the base :");
            scanf("%f",&a);
            printf("ENter the height :");
            scanf("%f",&b);
            pr(a,b); //function of perim,etre of ractangle
        };break;
        case 7:{
            printf("  Exit  ");
        };break;
        default :{
            printf("invalid choice ");
        };break;
    }
     return 0;
}