#ifndef AIDCOMMON_H
#define AIDCOMMON_H

#include "aid_sqldb.h"

#include <direct.h>	// cross-platform?? [fsh]
#include <string>

class AidCommon
{
public:
	explicit AidCommon();
	~AidCommon();

	static bool insertJournal(const std::string& record);
	static bool checkDir(const std::string& dir, std::string ip = "127.0.0.1");
	static bool createDir(const std::string& dir, std::string ip = "127.0.0.1");
};

#endif // AIDCOMMON_H
