#include "StringCalculator.h"
#include <gtest/gtest.h>

class StringCalculatorFixture:public testing::Test{
protected:
    string input;
    int expectedValue;
    int actualValue;
};

TEST_F(StringCalculatorFixture,add_emptyInputString_ZeroIsExpected){
  //Arrange
   input="";
  expectedValue=0;
  //Act
  actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_emptyInputString_ZeroIsExpected){
  //Arrange
  string input="";
  int expectedValue=0;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}
TEST(StringCalculatorTestSuite,add_InputZero_ZeroIsExpected){
  //Arrange
  string input="0";
  int expectedValue=0;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}
