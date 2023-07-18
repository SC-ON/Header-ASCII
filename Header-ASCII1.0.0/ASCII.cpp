#ifndef ASCII_H
#define ASCII_H


/*********************************************************************
    程序名: ASCII.h
    版权: (c)2023 SC-ON
    作者: DanJamesThoams
    日期: 2023-07-18 15:12
    说明: 一个“简便”的关于ASCII码的库
*********************************************************************/




#include <stack>
#include <string>
#include <algorithm>


class ASCII {
	private:

		std::string __author__ = "DanJamesThomas";
		std::string __version__ = "1.0.0";


		int originalNum;
		char originalChar;

		std::string tenToR(int n, int radix);
		int defineWithChar(char letter);
		char defineWithInt(int num);
	public:
		ASCII setInt(int num);
		ASCII setChar(char letter);
		int toInt();
		char toChar();
		std::string toBin();
		std::string toOct();
		std::string toHex();
};


int ASCII::defineWithChar(char letter) {
	this->originalNum = (int)letter;
	this->originalChar = letter;
	return this->originalNum;
}

char ASCII::defineWithInt(int num) {
	this->originalChar = (char)num;
	this->originalNum = num;
	return this->originalChar;
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

ASCII ASCII::setChar(char letter) {
	this->defineWithChar(letter);
	return *this;
}

int ASCII::toInt() {
	return this->originalNum;
}

char ASCII::toChar() {
	return this->originalChar;
}

std::string ASCII::toBin() {
	return this->tenToR(this->originalNum, 2);
}

std::string ASCII::toOct() {
	return this->tenToR(this->originalNum, 8);
}

std::string ASCII::toHex() {
	return this->tenToR(this->originalNum, 16);
}

#endif
