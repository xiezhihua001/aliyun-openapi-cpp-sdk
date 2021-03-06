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

#include <alibabacloud/live/model/DescribeLivePullStreamConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLivePullStreamConfigResult::DescribeLivePullStreamConfigResult() :
	ServiceResult()
{}

DescribeLivePullStreamConfigResult::DescribeLivePullStreamConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLivePullStreamConfigResult::~DescribeLivePullStreamConfigResult()
{}

void DescribeLivePullStreamConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allLiveAppRecordList = value["LiveAppRecordList"]["LiveAppRecord"];
	for (auto value : allLiveAppRecordList)
	{
		LiveAppRecord liveAppRecordListObject;
		if(!value["DomainName"].isNull())
			liveAppRecordListObject.domainName = value["DomainName"].asString();
		if(!value["AppName"].isNull())
			liveAppRecordListObject.appName = value["AppName"].asString();
		if(!value["StreamName"].isNull())
			liveAppRecordListObject.streamName = value["StreamName"].asString();
		if(!value["SourceUrl"].isNull())
			liveAppRecordListObject.sourceUrl = value["SourceUrl"].asString();
		if(!value["StartTime"].isNull())
			liveAppRecordListObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			liveAppRecordListObject.endTime = value["EndTime"].asString();
		liveAppRecordList_.push_back(liveAppRecordListObject);
	}

}

std::vector<DescribeLivePullStreamConfigResult::LiveAppRecord> DescribeLivePullStreamConfigResult::getLiveAppRecordList()const
{
	return liveAppRecordList_;
}

