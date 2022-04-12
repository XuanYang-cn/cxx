#include <iostream>
#include <memory>
#include "rua.h"

int
main(){
    AirlineTicket myTicket;

    myTicket.setPassengerName("John");
    myTicket.setNumberOfMiles(1000);
    double cost = myTicket.calculatePrice();

    std::cout << "This ticket will cost $" << cost << std::endl;

    auto myTicket2 = std::make_unique<AirlineTicket>();
    myTicket2->setPassengerName("Lisa");
    myTicket2->setNumberOfMiles(700);
    myTicket2->setHasEliteSuperRewardStatus(true);
    double cost2 = myTicket2->calculatePrice();

    std::cout << "This ticket2 will cost $" << cost2 << std::endl;

    AirlineTicket *myTicket3 = new AirlineTicket();
    delete myTicket3;
}
