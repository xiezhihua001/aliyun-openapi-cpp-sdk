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

#include <alibabacloud/cms/model/QueryMetricDataRequest.h>

using AlibabaCloud::Cms::Model::QueryMetricDataRequest;

QueryMetricDataRequest::QueryMetricDataRequest() :
	RpcServiceRequest("cms", "2018-03-08", "QueryMetricData")
{}

QueryMetricDataRequest::~QueryMetricDataRequest()
{}

long QueryMetricDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryMetricDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryMetricDataRequest::getPeriod()const
{
	return period_;
}

void QueryMetricDataRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string QueryMetricDataRequest::getMetric()const
{
	return metric_;
}

void QueryMetricDataRequest::setMetric(const std::string& metric)
{
	metric_ = metric;
	setParameter("Metric", metric);
}

std::string QueryMetricDataRequest::getLength()const
{
	return length_;
}

void QueryMetricDataRequest::setLength(const std::string& length)
{
	length_ = length;
	setParameter("Length", length);
}

std::string QueryMetricDataRequest::getProject()const
{
	return project_;
}

void QueryMetricDataRequest::setProject(const std::string& project)
{
	project_ = project;
	setParameter("Project", project);
}

std::string QueryMetricDataRequest::getEndTime()const
{
	return endTime_;
}

void QueryMetricDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string QueryMetricDataRequest::getExpress()const
{
	return express_;
}

void QueryMetricDataRequest::setExpress(const std::string& express)
{
	express_ = express;
	setParameter("Express", express);
}

std::string QueryMetricDataRequest::getStartTime()const
{
	return startTime_;
}

void QueryMetricDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string QueryMetricDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryMetricDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string QueryMetricDataRequest::getDimensions()const
{
	return dimensions_;
}

void QueryMetricDataRequest::setDimensions(const std::string& dimensions)
{
	dimensions_ = dimensions;
	setParameter("Dimensions", dimensions);
}

