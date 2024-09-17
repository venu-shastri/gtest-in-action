#include "StringCalculator.h"
#include <gtest/gtest.h>
#include <vector>

class TestPair{
public:
    string input;
    int expectedValue;
    TestDataPair(string _input,int _expectedValue) : input{_input}, expectedValue{_expectedValue}{
      }
};


TEST(StringCalculatorDataDrivenTestSuite,DataDrivenTestCase){
  vector<TestPair> dataList;
  TestPair pair_one { "",0};
  TestPair pair_two { "0",0};
  TestPair pair_three { "1",1};
  TestPair pair_four { "1,2",3};
  TestPair pair_five { "1,2,3",6};

  dataList.push_back(pair_one);
  dataList.push_back(pair_two);
  dataList.push_back(pair_three);
  dataList.push_back(pair_four);
  dataList.push_back(pair_five);
  
  / Iterate using a range-based for-loop
    for (TestPair dataPair : dataList) {
        int actualValue=Add(dataPair.input);
        ASSERT_EQ(actualValue,dataPair.expectedValue);
    }

}
