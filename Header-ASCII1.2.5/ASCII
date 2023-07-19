#ifndef ASCII_H
#define ASCII_H
#pragma GCC system_header


/*********************************************************************
    程序名: ASCII.h
    版权: (c)2023 SC-ON
    作者: DanJamesThoams
    日期: 2023-07-19 19:12
    说明: 一个“简便”的关于ASCII码的库
*********************************************************************/




#include <stack>
#include <string>
#include <algorithm>


class ASCII {
	private:

		std::string __author__ = "DanJamesThomas";
		std::string __version__ = "1.2.5";


		int originalNum = 32;
		char originalCharacter = ' ';

		std::string tenToR(int n, int radix);
		int defineWithCharacter(char character);
		char defineWithInt(int num);
	public:
		ASCII setInt(int num);
		ASCII setChar(char character);
		int toInt();
		char toChar();
		std::string toBin();
		std::string toOct();
		std::string toHex();
};


int ASCII::defineWithCharacter(char character) {
	this->originalNum = (int)character;
	this->originalCharacter = character;
	return this->originalNum;
}

char ASCII::defineWithInt(int num) {
	this->originalCharacter = (char)num;
	this->originalNum = num;
	return this->originalCharacter;
}

std::string ASCII::tenToR(int n, int radix) {
	std::string ans = "";
	do {
		int t = n % radix;
		if (t >= 0 && t <= 9)
			ans += (t + '0');
		else
			ans += (t - 10 + 'a');
		n /= radix;
	} while (n != 0);
	std::reverse(ans.begin(), ans.end());
	return ans;
}

ASCII ASCII::setInt(int num) {
	this->defineWithInt(num);
	return *this;
}

ASCII ASCII::setChar(char character) {
	this->defineWithCharacter(character);
	return *this;
}

int ASCII::toInt() {
	return this->originalNum;
}

char ASCII::toChar() {
	return this->originalCharacter;
}

std::string ASCII::toBin() {
	std::string s = this->tenToR(this->originalNum, 2);
	if (s.length() < 8) {
		while (s.length() < 8) {
			s = '0' + s;
		}
	}
	return s;
}

std::string ASCII::toOct() {
	return this->tenToR(this->originalNum, 8);
}

std::string ASCII::toHex() {
	return this->tenToR(this->originalNum, 16);
}

std::string tenToR(int n, int radix) {
	std::string ans = "";
	do {
		int t = n % radix;
		if (t >= 0 && t <= 9)
			ans += (t + '0');
		else
			ans += (t - 10 + 'a');
		n /= radix;
	} while (n != 0);
	std::reverse(ans.begin(), ans.end());
	return ans;
}

int changeToNum(char character) {
	return (int)character;
}

char changeToCharacter(int number) {
	return (char)number;
}
#endif
