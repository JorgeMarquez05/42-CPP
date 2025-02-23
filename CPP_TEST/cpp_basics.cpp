#include <iostream>

// float	toCelsius(float fahrenheit)
// {
// 	return ((5.0 / 9.0) * (fahrenheit - 32.0));
// }

// int	main(void)
// {
// 	float	f_value;
// 	float	result;

// 	f_value = 70.8;
// 	result = toCelsius(f_value);
// 	std::cout << "Fahrenheit: " << f_value << std::endl;
// 	std::cout << "Convert Fahrenheit to Celsius: " << result << std::endl;
// 	return (0);
// }

// int	main(void)
// {
// 	std::string new_str = "Hello World!";
//     std:: string *ptr = &new_str;
//     std::cout << new_str << std::endl;
//     std::cout << &new_str << std::endl;
//     std::cout << *ptr << std::endl;
//     std::cout << &ptr << std::endl;
//     *ptr = "GREAT";
//     std::cout << *ptr << std::endl;
//     std::cout << new_str << std::endl;
// 	return (0);
// }

// int	main(void)
// {
// 	std::string new_str = "Hello";
// 	std::string new_str2 = "World!";
// 	std::string final_str = new_str.append(" ").append(new_str2);
//     std:: string *ptr = &final_str;
//     std::cout << &final_str << std::endl;
//     std::cout << &ptr << std::endl;
// 	return (0);
// }

// int	main(void)
// {
// 	std::string new_str = "Hello";
// 	std::string new_str2 = "World!";
// 	std::string final_str = new_str.append(" ").append(new_str2);
//     std:: string &ref_str = final_str;
//     std::cout << &final_str << std::endl;
//     std::cout << &ref_str << std::endl;
//     std::cout << "The lenght of final_str is: " << ref_str.length() << std::endl;
// 	return (0);
// }

// int	main(void)
// {
// 	int x;
// 	x = 5;
// 	std::string new_str = "Hello";
// 	std::string new_str2 = "World!";
// std::string final_str = new_str + " " + new_str2; // Concatenate
// 	std::string final_str = new_str.append(" ").append(new_str2);
// 	std::cout << final_str << "\n";
//     final_str.at(6)= 'M';
// 	std::cout << final_str << "\n";
//     std::cout << "The lenght of final_str is: " << final_str.length() << std::endl;
// 	std::cout << x;
// 	return (0);
// }