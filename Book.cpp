//Book.cpp

#include "Book.h"



Book::Book(int Pages, string Author, double Price, string Name, string Color, double Width, double Height)
{
	pages = Pages;
	author = Author;
	price = Price;
	name = Name;
	color = Color;
	width = Width;
	height = Height;
}

void Book::get_pages()
{
	cout << "Pages:" << pages << endl;
}
void Book::get_author()
{
	cout << "Author: " << author << endl;
}
void Book::get_price()
{
	cout << "Price: " << price << endl;
}
void Book::get_name()
{
	cout << "Name: " << name << endl;
}
void Book::get_color()
{
	cout << "Color: " << color << endl;
}
void Book::get_width()
{
	cout << "Width: " << name << endl;
}
void Book::get_height()
{
	cout << "Height: " << height << "\n" << endl;
}