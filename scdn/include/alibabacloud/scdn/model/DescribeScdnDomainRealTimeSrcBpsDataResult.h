/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNDOMAINREALTIMESRCBPSDATARESULT_H_
#define ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNDOMAINREALTIMESRCBPSDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/scdn/ScdnExport.h>

namespace AlibabaCloud
{
	namespace Scdn
	{
		namespace Model
		{
			class ALIBABACLOUD_SCDN_EXPORT DescribeScdnDomainRealTimeSrcBpsDataResult : public ServiceResult
			{
			public:
				struct DataModule
				{
					std::string value;
					std::string timeStamp;
				};


				DescribeScdnDomainRealTimeSrcBpsDataResult();
				explicit DescribeScdnDomainRealTimeSrcBpsDataResult(const std::string &payload);
				~DescribeScdnDomainRealTimeSrcBpsDataResult();
				std::string getEndTime()const;
				std::vector<DataModule> getRealTimeSrcBpsDataPerInterval()const;
				std::string getDomainName()const;
				std::string getStartTime()const;
				std::string getDataInterval()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string endTime_;
				std::vector<DataModule> realTimeSrcBpsDataPerInterval_;
				std::string domainName_;
				std::string startTime_;
				std::string dataInterval_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNDOMAINREALTIMESRCBPSDATARESULT_H_