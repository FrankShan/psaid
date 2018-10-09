#ifndef PLAN_CLIENT_AIDFORCEDRECOVER_H
#define PLAN_CLIENT_AIDFORCEDRECOVER_H

#include <string>


class CAidForcedRecover {
public:
	int requestCondition();
	std::string replyCondition(const std::string &message);
};


#endif //PLAN_CLIENT_AIDFORCEDRECOVER_H
