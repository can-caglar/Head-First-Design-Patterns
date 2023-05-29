#pragma once
#include <string>

class MenuItem
{
public:
	MenuItem()
		: m_name(""), m_desc(""), m_price(0.0), m_isVeggie(false) {}
	MenuItem(std::string name, std::string description,
		double price, bool isVeggie) : m_name(name), m_desc(description),
		m_price(price), m_isVeggie(isVeggie) {};
	std::string getName();
	std::string description();
	double getPrice();
private:
	std::string m_name;
	std::string m_desc;
	double m_price;
	bool m_isVeggie;
};
