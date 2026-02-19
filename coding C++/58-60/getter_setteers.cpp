#include <iostream>
class stove
{
private:                 // this is to avoid misuse of this attribute
    int temperature = 0; // as it is public it will be accessabllllllllllllle outside
public:
stove(int temperature)
{
    settemperature(temperature);
}
    int gettemperature()
    {
        return temperature;
    }
    void settemperature(int temperature)
    {
        // ADD A LOGIC SO TEMPERATure of stove can't excide 120
        if (temperature > 0 && temperature < 120)
        {
            this->temperature = temperature;
        }
        else if (temperature < 0)
        {
            this->temperature = 0;
        }
        else if (temperature > 120)
        {
            this->temperature = 120;
        }
    }
};
int main()
{
    stove stove1(35);
    std::cout << "temperature is " << stove1.gettemperature() << "\n";
    stove1.settemperature(1000000000);
    // stove1.temperature=100000;//impossssible  this should nnot be possible
    std::cout << "temperature is " << stove1.gettemperature() << "\n";
    stove1.settemperature(76);
    std::cout << "temperature is " << stove1.gettemperature() << "\n";
    stove1.settemperature(-6);
    std::cout << "temperature is " << stove1.gettemperature() << "\n"; 
    return 0;
}