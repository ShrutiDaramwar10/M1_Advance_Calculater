#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Addition.h"
#include "Substraction.h"
#include "Multiplication.h"
#include "Division.h"
#include "Modulus.h"
#include "Power.h"
#include "Factorial.h"
#include "Derivatives.h"
#include "Integration.h"
#include "Equation.h"
#include "Base Conversion.h"


int main(int argc, char *argv[]) {
	 int choice; 
	 int n1,n2, ans=0;
	 float c , x,n ;
 	  double a,b,integral;
	   double  z;
	    char s[20];
      int base1,base2; 
  printf("Select the operation you want perform");
  printf("1.Additon\n 2.Subtraction\n 3.multplication \n 4.Division \n 5.Modules\n 6.Power\n 7.Factorial\n 8.Derivatives\n 9.Intrgration by Trapezoidal formula\n 10.Quadratic Equation\n 11. Any base to Any base conversion \n ");
  scanf("%d", &choice);

// switch statement
 switch (choice) {

    case 1:
      
      printf("Enter two number");
      scanf("%d %d",&n1,&n2);
      
      ans = addition(n1,n2); //calling addition function
      
      printf("answer=%d",ans);
      break;
    case 2:
      //int n1,n2, ans=0;
      printf("Enter two number");
      scanf("%d %d",&n1,&n2);
      ans=subtraction(n1,n2); //calling subtraction function
      printf("answer=%d",ans);
      break;
    case 3:
      //int n1,n2, ans=0;
      printf("Enter two number");
      scanf("%d %d",&n1,&n2);
      ans = multiplication(n1,n2); //calling multiply function 
      printf("answer=%d",ans);
      break;
    case 4:
     // int n1,n2, ans=0;
      printf("Enter two number");
      scanf("%d %d",&n1,&n2);
     
      ans = division(n1,n2);    //calling division function
      printf("answer=%d",ans);

      break;
    case 5: 
      //int n1,n2, ans=0;
      printf("Enter two number");
      scanf("%d %d",&n1,&n2);
      ans= modulus(n1,n2);  // calling madules function
      printf("answer=%d",ans);
      break;  
    case 6: 
      //int n1,n2, ans=0;
      printf("\nEnter two numbers to find the power \n");
      printf("number: ");
      scanf("%d",&n1);
 
      printf("power : ");
      scanf("%d",&n2);      // calling power function
      ans= power(n1,n2);
      printf("answer=%d",ans);
      break;  
    case 7: 
      //int n1,ans=0;
      printf("\nEnter a number to find factorial : ");
      scanf("%d",&n1);
      ans = factorial(n1); //calling  factorial function
      printf("answer=%d",ans);
      break;  
	case 8: 
      //float c , x,n , ans=0;
	  printf("Enter the const value\n");
	  scanf("%f",&c);
	  printf("Enter the variable value\n");
	  scanf("%f",&x);
	  printf("Enter the power value\n");
	  scanf("%f",&n);
	  ans = derivative (c,x,n);
	  printf("answer=%f",ans);
      break;
    case 9:
		
 	  //double a,b,integral;
  		/*Ask the user for necessary input */
  	  printf("\nEnter the no. of sub-intervals: ");
  	  scanf("%d",&n);
  	  printf("\nEnter the initial limit: ");
  	  scanf("%lf",&a);
  	  printf("\nEnter the final limit: ");
  	  scanf("%lf",&b); 
	  integral = integration(n,a,b);
		/*Print the answer */
  	  printf("\nThe integral is: %lf\n",integral);
	  break;  
	case 10:
		
     // double a, b, c;
      printf("Enter coefficients a, b and z: ");
      scanf("%lf %lf %lf", &a, &b, &z);
      equation(a,b,z);
      break;
    case 11:
  //    char s[20];
    //  int base1,base2;
      printf("Enter the number and base:");
      scanf("%s%d",s,&base1);
      printf("Enter the base to be converted:");
      scanf("%d",&base2);
      baseconversion(s,base1,base2);

        
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
