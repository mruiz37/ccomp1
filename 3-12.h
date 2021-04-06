#include <string>
#include <iostream>

 class Date {
 public:
 
 Date(  int dayI, int monthI, int yearI)
 : day{dayI}, month{monthI}, year{yearI}  { // 
  if(month <1 || month>12){
      month=1;
  }


 }




// function that sets day
 void setDay(int dayI) {
 day = dayI;
 }


  // function returns day
  int getDay() const {
      return day;
  }


// function that sets month
 void seMonth(int monthI) {
 month = monthI;
 }


  // function returns day
  int getMonth() const {
      return month;
  }




  // function that sets year
 void setYear(int yearI) {
  year= yearI;
 }


  // function returns year
  int getYear() const {
      return year;
  }





 //display date
 void displayDate(){
  std::cout<<month<<"/" <<day<<"/" <<year  <<std::endl; 
  

 }

 private:
 int month;
 int day;
 int year;

 };  
