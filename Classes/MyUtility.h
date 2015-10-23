#ifndef __MY_UTILITY_H__
#define __MY_UTILITY_H__

#include "cocos2d.h"

class MyUtility {
public:
	static std::string getCurrentTime();

	static std::string gbk_2_utf8(const std::string text);

	static std::string getUTF8Char(const std::string key);
};

#endif // __MY_UTILITY_H__