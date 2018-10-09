#ifndef __AID_TOPO_H__
#define __AID_TOPO_H__

#include <vector>

class CAidTopo {
public:
	int initTopology();
	int analyzeLineTypeById(long line_id);
	int getEndByLine(long segment_id, std::vector<long> &end_id_vec);
	int getSingleLineRisks(long line_id, std::vector<long> &single_line_risk_st_id_vec);
	int getBayIdByEnd(long end_id);
private:
};

#endif