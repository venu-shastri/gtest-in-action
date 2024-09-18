#include <gtest/gtest.h>
#include "TestChallenge.h"
#include <gmock/gmock.h>
using testing::FloatEq;//matcher used to asset on method arguments
using testing::Return; // Return value of mock function
//Stub - Fake Dependency
class NetworkAlerterStub:public INetworkAlerter{
public:
      int  alert(float celcius) override{
          return 500;
      }

};

//Mock Implementation using Gmock
class NetworkAlerterMock:public INetworkAlerter{
public:
             MOCK_METHOD(int ,alert,(float celcius));
};

TEST(NetworkAlerterTestSuite,StateBasedTest){
  NetworkAlerterStub stub;
    int failureCount=  alertInCelciusFacade(400,&stub);
    ASSERT_EQ(failureCount,1);
}
TEST(NetworkAlerterTestSuite,InteractionTest){
    NetworkAlerterMock mock;
      // EXPECT_CALL (mockObject,method(Matcher).Times(Frequency).WillOnce/Repeat(Action)
      
  EXPECT_CALL(mock,alert(FloatEq(204))).WillOnce(Return(500));
    int failureCount=  alertInCelciusFacade(400,&mock);
    ASSERT_EQ(failureCount,1);
    
}
