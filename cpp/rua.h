#include <string>

class AirlineTicket{
public:
    AirlineTicket();
    ~AirlineTicket();

    double
    calculatePrice() const;

    const std::string&
    getPassengerName() const;

    int
    getNumberOfMiles() const;

    bool
    hasEliteSuperRewardStatus() const;

    void
    setPassengerName(const std::string& name);

    void
    setNumberOfMiles(int miles);

    void
    setHasEliteSuperRewardStatus(bool status);

private:
    std::string passangerName;
    int numberOfMiles;
    bool hasEliteSuperReward;
};
