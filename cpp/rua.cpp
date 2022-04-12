#include <string>
#include "rua.h"

AirlineTicket::AirlineTicket(): passangerName("Unknown Passanger"), numberOfMiles(0), hasEliteSuperReward(false){}

// AirlineTicket::AirlineTicket(){
//     passangerName = "Unknown Passanger";
//     numberOfMilesr = 0;
//     hasEliteSuperRewardStatus = false;
// }

AirlineTicket::~AirlineTicket(){
    // do nothing
}

double
AirlineTicket::calculatePrice() const {
    if (hasEliteSuperRewardStatus()) {
        return 0;
    }

    return getNumberOfMiles() * 0.1;
}

const std::string&
AirlineTicket::getPassengerName() const {
    return passangerName;
}

int
AirlineTicket::getNumberOfMiles() const {
    return numberOfMiles;
}

bool
AirlineTicket::hasEliteSuperRewardStatus() const {
    return hasEliteSuperReward;
}

void
AirlineTicket::setPassengerName(const std::string& name){
    passangerName = name;
}

void
AirlineTicket::setNumberOfMiles(int miles){
    numberOfMiles = miles;
}

void
AirlineTicket::setHasEliteSuperRewardStatus(bool status){
    hasEliteSuperReward = status;
}
