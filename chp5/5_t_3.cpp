#include <iostream>

constexpr int framed_limit = 2;

int area(int length, int width)
{
	return length * width;
}
int framed_area(int x, int y)
{
	return area(x-framed_limit, y-framed_limit);
}

int f(int x, int y, int z)
{
	int area1 = area(x, y);
	if (area1 <= 0) {
		std::cout << "non-positive area1: " << area1 << std::endl;
		return 1;
	}
	int area2 = framed_area(100, z);
	if (area2 <= 0) {
		std::cout << "non-positive area2: " << area2 << std::endl;
		return 1;
	}
	int area3 = framed_area(y, z);
	if (area3 <= 0) {
		std::cout << "non-positive area3: " << area3 << std::endl;
		return 1;
	}
	double ratio = double(area1) / area3;
	std::cout << "area1: " << area1 << std::endl;
	std::cout << "area2: " << area2 << std::endl;
	std::cout << "area3: " << area3 << std::endl;
	std::cout << "ratio: " << ratio << std::endl;
	return 0;
}

int main() {
	f(10,20,30);
}