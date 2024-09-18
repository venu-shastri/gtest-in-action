#inculde <gtest/gtest.h>
#include "StringCalculator.h"

int DisplayFunctionCallCount=0;
int DisplayFunctionArg;

void MockDisplayFunction(int result){
    DisplayFunctionCallCount++; //record
    DisplayFunctionArg=result;//record
}
void ResetIntercationValues(){
    DisplayFunctionCallCount=0;
    DisplayFunctionArg=0;
}
TEST(InteractionTestSuite,InteractionTest){

  string input="";
  Add(input,&MockDisplayFunction);
  EXPECT_EQ(DisplayFunctionCallCount,1);
  EXPECT_EQ(DisplayFunctionArg,0);
  ResetIntercationValues();
}
