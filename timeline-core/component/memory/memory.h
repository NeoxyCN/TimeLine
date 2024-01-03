#pragma once
namespace component {
	namespace memory {
		struct memoryKit
		{
			bool isTime;
			//TODO int换成单位类型 UnitType用来标记单位是second day month year
			int unit;
			int step;
		};

		bool addMemory();
		bool deleteMemory();
		bool modifyMemory();
		memoryKit checkMemory();

	}
}