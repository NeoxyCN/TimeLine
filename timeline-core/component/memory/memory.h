#pragma once
namespace component {
	namespace memory {
		struct memoryKit
		{
			bool isTime;
			//TODO int���ɵ�λ���� UnitType������ǵ�λ��second day month year
			int unit;
			int step;
		};

		bool addMemory();
		bool deleteMemory();
		bool modifyMemory();
		memoryKit checkMemory();

	}
}