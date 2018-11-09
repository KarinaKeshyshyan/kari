//.h


#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
	int pages;
	string author;
	double price;

protected:
	string name;
	string color;

public:
	double width;
	double height;


	Book() {}

	Book(int Pages, string Author, double Price, string Name, string Color, double Width, double Height);
	void get_pages();
	void get_author();
	void get_price();
	void get_name();
	void get_color();
	void get_width();
	void get_height();

};
#pragma once
