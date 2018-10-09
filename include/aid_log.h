#ifndef PLAN_CLIENT_LOG_H
#define PLAN_CLIENT_LOG_H

#include <string>

class CAidLog {

public:
	int initLog(std::string log_dir);
	void write(std::string level, std::string log);

};


#endif //PLAN_CLIENT_LOG_H