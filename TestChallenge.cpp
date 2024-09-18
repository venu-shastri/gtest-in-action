#include <stdio.h>
#include <assert.h>
#include "TestChallenge.h"
 
int alertFailureCount = 0;

int getFailureCount(){
return alertFailureCount;
}

void alertInCelcius(float farenheit,INetworkAlerter *networkAlerterPtr) {
    float celcius = (farenheit - 32) * 5 / 9;
    int returnCode = networkAlerterPtr->alert(celcius);
    if (returnCode != 200) {
        alertFailureCount += 1;
    }
}

int alertInCelciusFacade(float farenheit,INetworkAlerter *networkAlerterPtr){
   alertInCelcius(farenheit,networkAlerterPtr);
   return getFailureCount();
 }
 
