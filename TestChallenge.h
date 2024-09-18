//void alertInCelcius(float farenheit);
//int getFailureCount();

//Abstraction using Class Interface
// functionpointer
class INetworkAlerter{
public:
    virtual int alert(float celcius)=0;
};

int alertInCelciusFacade(float farenheit,INetworkAlerter *networkAlerterPtr);
