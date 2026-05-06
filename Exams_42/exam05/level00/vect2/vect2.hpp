#pragma once
#include <iostream>

class vect2 {
	int x;
	int y;
	public:
		vect2() : x(0), y(0) {}
		vect2(int x, int y) : x(x), y(y) {}
		vect2(const vect2& obj) : x(obj.x), y(obj.y) {}
		vect2& operator=(const vect2& obj) {
			if (this != &obj) {
				x = obj.x;
				y = obj.y;
			}
			return *this;
		}
		~vect2() {}
		int& operator[](int i) {
			return (i == 0 ? x : y);
		}
		int operator[](int i) const {
			return (i == 0 ? x : y);
		}
		friend std::ostream& operator<<(std::ostream& c, const vect2& v) {
			c << "{" << v[0] << ", " << v[1] << "}";
			return c;
		}
		friend vect2 operator*(int num, const vect2& obj) {
			return vect2(num * obj.x, num * obj.y);
		}
		vect2 operator++(int) {
			vect2 tmp = *this;
			x++;
			y++;
			return tmp;
		}
		vect2 operator--(int) {
			vect2 tmp = *this;
			x--;
			y--;
			return tmp;
		}
		vect2& operator++() {
			x++;
			y++;
			return *this;
		}
		vect2& operator--() {
			x--;
			y--;
			return *this;
		}
		vect2& operator+=(const vect2& obj) {
			x += obj.x;
			y += obj.y;
			return *this;
		}
		vect2& operator-=(const vect2& obj) {
			x -= obj.x;
			y -= obj.y;
			return *this;
		}
		vect2& operator*=(int num) {
			x *= num;
			y *= num;
			return *this;
		}
		vect2 operator+(const vect2& obj) const {
			return vect2(x + obj.x, y + obj.y);
		}
		vect2 operator-(const vect2& obj) const {
			return vect2(x - obj.x, y - obj.y);
		}
		vect2 operator*(int num) const {
			return vect2(x * num, y * num);
		}
		vect2 operator-() const {
			return vect2(-x, -y);
		}
		bool operator==(const vect2& obj) const {
			return (x == obj.x && y == obj.y);
		}
		bool operator!=(const vect2& obj) const {
			return (!(x == obj.x && y == obj.y));
		}
};