#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;
                            // Main Hostel Menu Interface
class Hostel {
    public:
    Hostel();
                            // Student Menu Interface
    void sMenu();
                            // Attendance Menu Interface
    void aMenu();
                            // Staff Menu Interface
    void staffMenu();
                            // Room Allocation Interface
    void rMenu();
                            // Fee And Account Interface
    void faMenu();
                            // Complaint Management Interface
    void cMenu();
};
Hostel::Hostel() {
    int choice;
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t----------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tHOSTEL MANAGEMENT SYSTEM" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t----------------------------------------------------------" << endl;
    cout << "1- Student Management. " << endl;
    cout << "2- Attendance Management. " << endl;
    cout << "3- Room Allocation. " << endl;
    cout << "4- Staff Management. " << endl;
    cout << "5- Fee and Accounts. " << endl;
    cout << "6- Complaint Management. " << endl;
    cout << "7- Exit. " << endl;
    cout << "Enter The Choice : ";
    cin >> choice;
}
void Hostel::sMenu() {
    int choice;
    cout << "\t\t\t\t\t\t\t\t\t-------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\tSTUDENT MANAGEMENT SYSTEM" << endl;
    cout << "\t\t\t\t\t\t\t\t\t-------------------------" << endl;
    cout << "1- Add Student. " << endl;
    cout << "2- Update Student. " << endl;
    cout << "3- Delete Student. " << endl;
    cout << "4- Search Student. " << endl;
    cout << "5- Display Student. " << endl;
    cout << "6- Exit. " << endl;
    cout << "Enter The Choice : ";
    cin >> choice;
}
void Hostel::aMenu() {
    int choice;
    cout << "\t\t\t\t\t\t\t\t\t----------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\tATTENDANCE MANAGEMENT SYSTEM" << endl;
    cout << "\t\t\t\t\t\t\t\t\t----------------------------" << endl;
    cout << "1- Mark Attendance. " << endl;
    cout << "2- Show Attendance. " << endl;
    cout << "3- Exit. " << endl;
    cout << "Enter The Choice : ";
    cin >> choice;
}
void Hostel::staffMenu() {
    int choice;
    cout << "\t\t\t\t\t\t\t\t\t-----------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\tSTAFF MANAGEMENT SYSTEM" << endl;
    cout << "\t\t\t\t\t\t\t\t\t-----------------------" << endl;
    cout << "1- Add Staff Members. " << endl;
    cout << "2- Update Salary. " << endl;
    cout << "3- Delete Staff. " << endl;
    cout << "4- Show All Staff List. " << endl;
    cout << "5- Exit. " << endl;
    cout << "Enter The Choice : ";
    cin >> choice;
}
void Hostel::rMenu() {
    int choice;
    cout << "\t\t\t\t\t\t\t\t\t----------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\tROOM ALLOCATION SYSTEM" << endl;
    cout << "\t\t\t\t\t\t\t\t\t----------------------" << endl;
    cout << "1- Show Available Rooms List. " << endl;
    cout << "2- Allocate Room. " << endl;
    cout << "3- Deallocate Room. " << endl;
    cout << "4- Show Booked Rooms List. " << endl;
    cout << "5- Exit. " << endl;
    cout << "Enter The Choice : ";
    cin >> choice;
}
void Hostel::faMenu() {
    int choice;
    cout << "\t\t\t\t\t\t\t\t\t----------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\tFEE AND ACCOUNT SYSTEM" << endl;
    cout << "\t\t\t\t\t\t\t\t\t----------------------" << endl;
    cout << "1- Room Type. " << endl;
    cout << "2- Total Fee Invoice. " << endl;
    cout << "3- Security Deposit. " << endl;
    cout << "4- Security Withdraw. " << endl;
    cout << "5- Fines and Late Payments. " << endl;
    cout << "6- Exit. " << endl;
    cout << "Enter The Choice : ";
    cin >> choice;
}

void Hostel::cMenu() {
    int choice;
    cout << "\t\t\t\t\t\t\t\t\t---------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\tCOMPLAINT MANAGEMENT SYSTEM" << endl;
    cout << "\t\t\t\t\t\t\t\t\t---------------------------" << endl;
    cout << "1- Add Complaint. " << endl;
    cout << "2- Remove Complaint. " << endl;
    cout << "3- Show Complaint. " << endl;
    cout << "4- Update Complaint. " << endl;
    cout << "5- Display Complaints By Status. " << endl;
    cout << "6- Exit. " << endl;
    cout << "Enter The Choice : ";
    cin >> choice;
}
class Student {
    private:
    string firstName;
    string lastName;
    string gender;
    int ID;
public:
    Student();
    void setStudentDetails(string firstName, string lastName, string gender, int ID);
    string getfirstname();
    string getlastname();
    string getgender();
    int getID();
    void showEnteredDetails();
};
Student::Student() {
    firstName = "";
    lastName = "";
    gender = "";
    ID = 0;
}
void Student::setStudentDetails(string firstName, string lastName, string gender, int ID) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->gender = gender;
    this->ID = ID;
}
string Student::getfirstname() {
    return firstName;
}
string Student::getlastname() {
    return lastName;
}
string Student::getgender() {
    return gender;
}
int Student::getID() {
    return ID;
}
void Student::showEnteredDetails() {
    cout << "Name: " << firstName << " " << lastName<< endl;
    cout << "Gender: " << gender << endl;
    cout << "ID: " << ID << endl;
}

int main() {
    string firstName, lastName, gender;
    int ID;
    Hostel hostel;
    Student sDetails;
    hostel.sMenu();
    hostel.staffMenu();
    hostel.rMenu();
    hostel.faMenu();
    hostel.cMenu();
    cout << "Enter your First Name: ";
    cin >> firstName;
    cout << "Enter your Last Name: ";
    cin >> lastName;
    cout << "Enter your Gender: ";
    cin >> gender;
    cout << "Enter your ID: ";
    cin >> ID;
    sDetails.setStudentDetails(firstName, lastName, gender, ID);
    sDetails.showEnteredDetails();
    return 0;
}