//main.cpp

#include "Book.h"
int main()
{
	Book BookObject(321, "a", 20, "nfsdfl", "white", 245, 644);
	BookObject.get_pages();
	BookObject.get_author();
	BookObject.get_price();
	BookObject.get_name();
	BookObject.get_color();
	BookObject.get_width();
	BookObject.get_height();

	Book BookObject1(378, "b", 30, "nrtpfl", "black", 134, 244);
	BookObject1.get_pages();
	BookObject1.get_author();
	BookObject1.get_price();
	BookObject1.get_name();
	BookObject1.get_color();
	BookObject1.get_width();
	BookObject1.get_height();

	Book BookObject2(294, "c", 40, "vrtpfl", "orange", 234, 244);
	BookObject2.get_pages();
	BookObject2.get_author();
	BookObject2.get_price();
	BookObject2.get_name();
	BookObject2.get_color();
	BookObject2.get_width();
	BookObject2.get_height();

	system("pause");
	return 0;

}