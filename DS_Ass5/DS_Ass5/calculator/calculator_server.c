/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calculator.h"

float * add_1_svc(inputs *argp, struct svc_req *rqstp)
{
 static float result;
 
 result = argp->num1+argp->num2;
 printf("Request Received : Add %f and %f\n",argp->num1,argp->num2);
 printf("Response Sent : %f\n",result);
 
 return &result;
}
 
float * sub_1_svc(inputs *argp, struct svc_req *rqstp)
{
 static float result;
 
 result = argp->num1-argp->num2;
 printf("Received Request : Subtract %f from %f\n",argp->num2,argp->num1);
 printf("Response Sent : %f\n",result);
 
 return &result;
}
 
float * mul_1_svc(inputs *argp, struct svc_req *rqstp)
{
 static float result;
 
 result = argp->num1*argp->num2;
 printf("Request Received : Multiply %f by %f\n",argp->num1,argp->num2);
 printf("Response Sent : %f\n",result);
 
 return &result;
}
 
float * div_1_svc(inputs *argp, struct svc_req *rqstp)
{
 static float result;
 
 result = argp->num1/argp->num2;
 printf("Request Received : Divide %f by %f\n",argp->num1,argp->num2);
 printf("Response Sent : %f\n",result);
 
 return &result;
}
