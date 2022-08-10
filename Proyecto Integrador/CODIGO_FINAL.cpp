#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


//------------CLASE RESERVACION-----------------
class Reservacion{
    //ATRIBUTOS
    private:
        string pasajero;
        string vuelo;
        string reservacion;
    //METODOS
    public:
        //CONSTRUCTOR
        Reservacion();
        //GETTER
        string getPasajero();
        string getVuelo();
        string getReservacion();
        //SETTER
        void setPasajero(string);
        void setVuelo(string);
        void setReservacion(string);
        //OTHER
        void BuscarVuelo();
        void ElegirVuelo();
        void ReservarVuelo();
        void CancelarVuelo();
        void MostrarVuelo();
        void ListaEspera();
};
//FUNCION GETTER
string Reservacion::getPasajero(){
    return pasajero;
}
string Reservacion::getVuelo(){
    return vuelo;
}
string Reservacion::getReservacion(){
    return reservacion;
}
//FUNCION SETTER
void Reservacion::setPasajero(string _pasajero){
    pasajero=_pasajero;
}
void Reservacion::setVuelo(string _vuelo){
    vuelo=_vuelo;
}
void Reservacion::setReservacion(string _reservacion){
    reservacion=_reservacion;
}
//FUNCION OTHER
void Reservacion::BuscarVuelo(){}
void Reservacion::ElegirVuelo(){}
void Reservacion::ReservarVuelo(){}
void Reservacion::CancelarVuelo(){}
void Reservacion::MostrarVuelo(){}
void Reservacion::ListaEspera(){}

//------------CLASE AIRPORT-----------------
class Airport
{
    //ATRIBUTOS
    private:
        string id,date,city,country;
        double totalTransactions;
        double totalDailyIncome;
        int airlanes[];
    //METODOS
    public:
        //CONSTUCTOR
        Airport();
        //GETTER
        string getId();
        string getDate();
        string getCity();
        string getCountry();
        //SETTER
        void setId(string);
        void setDate(string);
        void setCity(string);
        void setCountry(string);
        //OTHER
        void startOperation();
        void printAllFlights();
        void closeOperation();
};
//CONSTUCTOR
Airport::Airport(){}
//FUNCION SETTER
void Airport::setId(string _id){
    id=_id;
}
void Airport::setDate(string _date){
    date=_date;
}
void Airport::setCity(string _city){
    city=_city;
}
void Airport::setCountry(string _country){
    country=_country;
}
//FUNCION GETTER
string Airport::getId(){
    return id;
}
string Airport::getDate(){
    return date;
}
string Airport::getCity(){
    return city;
}
string Airport::getCountry(){
    return country;
}

//FUNCION OTHER
void Airport::startOperation(){}
void Airport::printAllFlights(){}
void Airport::closeOperation(){}

//------------CLASE AIRLINE-----------------
class Airline 
{
    //ATRIBUTOS
    private:
        string boardingCity;
        string shortName;
        float incomes;
        string flights[];
    //METODOS
    public:
        //CONSTRUCTOR
        Airline();

        //GETTER
        string getBoardingCity();
        string getShortName();
        float getIncomes();

        //SETTER
        void setBoardingCity(string);
        void setShortName(string);
        void setIncomes(float);

        //OTHER
        void updateAirline();
        void scheduleFlight();
        void currentIncome();
        void closeOperation();

};
//CONSTUCTOR
Airline::Airline(){
    
}
//FUNCION GETTER
string Airline::getBoardingCity(){
    return boardingCity;
}
string Airline::getShortName(){
    return shortName;
}
float Airline::getIncomes(){
    return incomes;
}
//FUNCION SETTER
void Airline::setBoardingCity(string _boardingCity){
    boardingCity = _boardingCity;
}
void Airline::setShortName(string _shortName){
    shortName = _shortName;
}
void Airline::setIncomes(float _incomes){
    incomes = _incomes;
}
//FUNCION OTHER
void Airline::updateAirline(){}
void Airline:: scheduleFlight(){}
void Airline::currentIncome(){}
void Airline::closeOperation(){}

//------------CLASE FLIGHT-----------------
class Flight
{
    //ATRIBUTO
    private:
        string date;
        float hour;
        float price;
        string airplaneModel;
        string fromTo;
        float distance;
        string crew;
        float fuel;
        int passenger[];
    //METODOS
    public:
        //CONSTRUCTOR
        Flight();
        //GETTER
        string getDate();
        float getHour();
        float getPrice();
        string getAirplaneModel();
        string getFromTo();
        float getDistance();
        string getCrew();
        float getFuel();
        //SETTER
        void setDate(string);
        void setHour(float);
        void setPrice(float);
        void setAirplaneModel(string);
        void setFromTo(string);
        void setDistance(float);
        void setCrew(string);
        void setFuel(float);
        //OTHER
        void calculaFuel();

};
//CONSTRUCTOR 
Flight::Flight(){}
//FUNCION SETTER
void Flight::setDate(string _date){
    date = _date;
}
void Flight::setHour(float _hour){
    hour = _hour;
}
void Flight::setPrice(float _price){
    price= _price;
}
void Flight::setAirplaneModel(string _airplaneModel){
    airplaneModel = _airplaneModel;
}
void Flight::setFromTo(string _fromTO){
    fromTo = _fromTO;
}
void Flight::setDistance(float _distance){
    distance = _distance;
}
void Flight::setCrew(string _crew){
    crew= _crew;
}
void Flight::setFuel(float _fuel){
    fuel = _fuel;
}

//FUNCION GETTER
string Flight::getDate(){
    return date;
}
float Flight::getHour(){
    return hour;
}
float Flight::getPrice() {
    return price;
}
string Flight::getAirplaneModel(){
    return airplaneModel;
}
string Flight::getFromTo(){
    return fromTo;
}
float Flight::getDistance(){
    return distance;
}
string Flight::getCrew(){
    return crew;
}
float Flight::getFuel(){
    return fuel;
}

//FUNCION OTHER
void Flight::calculaFuel(){}

//------------CLASE PASSENGER-----------------
class Passenger
{
    //ATRIBUTOS
    private:
        string name;
        int phone;
        float kmRecorridos;
    //METODOS
    public:
        //CONSTRUCTOR
        Passenger();

        //GETTER
        string getName();
        int getPhone();
        float getkmRecorridos();

        //SETTER
        void setName(string);
        void setPhone(int);
        void setkmRecorridos(float);
};
Passenger::Passenger(){

}
//FUNCION SETTER
void Passenger::setName(string _name){
    name=_name;
}
void Passenger::setPhone(int _phone){
    phone=_phone;
}
void Passenger::setkmRecorridos(float _kmRecorridos){
    kmRecorridos=_kmRecorridos;
}
//FUNCION GETTER
string Passenger::getName(){
    return name;
}
int Passenger::getPhone(){
    return phone;
};
float Passenger::getkmRecorridos(){
    return kmRecorridos;
}

//------------MAIN-----------------
int main()
{
    system("pause");
    return 0;
}