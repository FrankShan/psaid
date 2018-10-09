#ifndef __AID_FAULTCLASSIFY_H__
#define __AID_FAULTCLASSIFY_H__

#include "aid_sensor.h"
#include "aid_common.h"

const int FAULT_TYPE_NORMAL = 0;
const int FAULT_TYPE_LV5 = 1;
const int FAULT_TYPE_SPEC = 2;

class CAidFaultClassify {
public:
	int classifyFault(long lFaultId);
private:
	bool isSpecialFault(long lFaultId);
	bool isLevelFiveOrAbove(long lFaultId);
};

#endif