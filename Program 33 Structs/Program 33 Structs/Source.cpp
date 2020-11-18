#include <iostream>
#include <string>

struct userInfo
{
	std::string name, phoneNumber;
	int age;
	//Default constructor.
	userInfo()
	{
		name = "DEFAULT NAME";
		phoneNumber = "DEFAULT NUM";
		age = 1;
	}
	//Set values constructor.
	userInfo(std::string startName, std::string startNum, int startAge)
	{
		name = startName;
		phoneNumber = startNum;
		age = startAge;
	}
	void PrintDetails()
	{
		std::cout << "\nName: " << name << "\nPhone Number: " << phoneNumber << "\nAge: " << age << std::endl;
	}
};

int main()
{
	userInfo user1 = userInfo();

	std::cout << "\nPlease enter your full name: " << std::endl;
	std::getline(std::cin, user1.name);

	std::cout << "\nPlease enter your phone number: " << std::endl;
	std::getline(std::cin, user1.phoneNumber);

	std::cout << "\nPlease enter your age: " << std::endl;
	std::cin >> user1.age;

	user1.PrintDetails();

	std::cin.get();

	return 0;
}