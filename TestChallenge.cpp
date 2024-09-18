#include <stdio.h>
#include <assert.h>
 
int alertFailureCount = 0;
 
int networkAlerter(float celcius) {
   //Communicate with Network, Require Internet Connectivity and credentials
  //If Communication is successfull , returns 200 otherwise 500
    return 500;
}
 
void alertInCelcius(float farenheit) {
    float celcius = (farenheit - 32) * 5 / 9;
    int returnCode = networkAlerter(celcius);
    if (returnCode != 200) {
        alertFailureCount += 0;
    }
}
 
