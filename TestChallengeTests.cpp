#include <gtest/gtest.h>
#include "TestChallenge.h"

//Stub - Fake Dependency
class NetworkAlerterStub:public INetworkAlerter{
public:
      int  alert(float celcius) override{
          return 500;
      }

};
TEST(NetworkAlerterTestSuite,StateBasedTest){
  NetworkAlerterStub stub;
    int failureCount=  alertInCelciusFacade(400,&stub);
    ASSERT_EQ(failureCount,1);
}
