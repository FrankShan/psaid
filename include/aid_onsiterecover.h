#ifndef PLAN_CLIENT_AIDONSITERECOVER_H
#define PLAN_CLIENT_AIDONSITERECOVER_H

#include <string>


class CAidOnsiteRecover {
public:
	int requestCondition();
	std::string replyCondition(const std::string &message);
};


#endif //PLAN_CLIENT_AIDFORCEDRECOVER_H
