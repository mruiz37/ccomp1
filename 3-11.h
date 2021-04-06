 #include <string>
 #include <iostream>

 class MotorVehicule {
 public:
 
 MotorVehicule( std::string makeI, std::string fuelTypeI, int yearOfManufactureI, std::string colorI, int engineCapacityI)
 : make{makeI}, fuelType{fuelTypeI}, yearOfManufacture{yearOfManufactureI}, color{colorI}, engineCapacity{engineCapacityI}  { // 


 }




// function that sets engineCapacity
 void setEngineCapacity(int engineCapacityI) {
 engineCapacityI = engineCapacityI;
 }


  // function returns yearOfManufacture
  int getEngineCapacity() const {
      return engineCapacity;
  }



 // function that sets color
 void setColor(std::string colorI) {
 color = colorI;
 }

 // function that returns color
 std::string getColor() const {
 return color;
 }



  // function that sets make
 void setYearOfManufacture(int YearOfManufactureI) {
 yearOfManufacture = YearOfManufactureI;
 }


  // function returns yearOfManufacture
  int getYearOfManufacture() const {
      return yearOfManufacture;
  }



// function that sets fuelType
 void setfuelType(std::string fuelTypeI) {
 fuelType = fuelTypeI;
 }

 // function that returns fuelType
 std::string getFuelType() const {
 return fuelType;
 }

 // function that sets make
 void setMake(std::string makeI) {
 make = makeI;
 }

 // function that returns make
 std::string getMake() const {
 return make;
 }

 //display car details
 void displayCarDetails(){

  std::cout<<" make "<<getMake()<<std::endl; 
  std::cout<<"fuelType "<<getFuelType()<<std::endl;
  std::cout<<" yearOfManufacture "<<getYearOfManufacture()<<std::endl; 
  std::cout<<" color "<<getColor()<<std::endl;
 std::cout<<" engineCapacity "<<getEngineCapacity()<<std::endl;


 }

 private:
 std::string make; 
 std::string fuelType;
 int yearOfManufacture; 
 std::string color;
 int engineCapacity;
 }; // end class Account
