#ifndef __AID_RISKANALYSIS_H__
#define __AID_RISKANALYSIS_H__

#include "aid_topo.h"
#include "aid_sensor.h"
#include "aid_common.h"

class CAidRiskAnalysis {
public:
	int getBranchViolations();
	int getInterfaceViolations();
	int getSingleLineRisks();
private:
};

#endif