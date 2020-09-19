

#include "calculator_operations.h"
#include "math.h"
#include"stdio.h"




/* input 2 number with choice of opperator*/
/*this programme uses function Pointer array */
int calci(int num1,int num2,int choice)
{



int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);
int power(int num1,int num);
int root(int num1,int num);
int logarithm(int num1,int num);



  int  result;
  int (*op[7])(int, int);

  op[0] = add;//choice 1 for add
  op[1] = subtract;//choice 2 for sub
  op[2] = multiply;//choice 3 for multiplication
  op[3] = divide;// choice 4 for divide
  op[4] = power;//choice 5 for num1 power num 2
  op[5] = logarithm;//choice 6 for log num1 to base num2
  op[6] = root;


  result = op[choice](num1, num2);


  return result;
}

float advance_calci(float num1,int choice)
{
    float square_root(float num1);
    float log_to_10(float num1);
    float natural_log(float num1);
    float sine_fun(float num1);
    float cos_fun(float num1);
    float sec_fun(float num1);
    float cosec_fun(float num1);
    float exponential(float num1);
    float factorial(float number);
    float one_by(float number);
    float modulous(float number);

    float result;
    float (*opa[12])(float);
    opa[0] = square_root;
  opa[1] = log_to_10;
  opa[2] = natural_log;
  opa[3] = sine_fun;
  opa[4] = sec_fun;
  opa[5] = cosec_fun;
  opa[7] = factorial;
  opa[8] = one_by;
  opa[9] = modulous;
  opa[10]= exponential;
  opa[11]= cos_fun;
    result = opa[choice](num1);
    return result;

}

int matrix(){
    int matrixs_sum();
    int matrix_sub();
    int matrix_mul();
    int (*opm[3])();
    opm[0]=matrixs_sum;
    opm[1]=matrix_sub;
    opm[3]=matrix_mul;
    return 0;
}
