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

#include <alibabacloud/cr/model/GetRepoRequest.h>

using AlibabaCloud::Cr::Model::GetRepoRequest;

GetRepoRequest::GetRepoRequest() :
	RoaServiceRequest("cr", "2016-06-07")
{}

GetRepoRequest::~GetRepoRequest()
{}

std::string GetRepoRequest::getRepoNamespace()const
{
	return repoNamespace_;
}

void GetRepoRequest::setRepoNamespace(const std::string& repoNamespace)
{
	repoNamespace_ = repoNamespace;
	setParameter("RepoNamespace", repoNamespace);
}

std::string GetRepoRequest::getRepoName()const
{
	return repoName_;
}

void GetRepoRequest::setRepoName(const std::string& repoName)
{
	repoName_ = repoName;
	setParameter("RepoName", repoName);
}

std::string GetRepoRequest::getRegionId()const
{
	return regionId_;
}

void GetRepoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

