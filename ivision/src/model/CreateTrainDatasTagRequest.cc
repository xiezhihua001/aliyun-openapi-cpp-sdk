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

#include <alibabacloud/ivision/model/CreateTrainDatasTagRequest.h>

using AlibabaCloud::Ivision::Model::CreateTrainDatasTagRequest;

CreateTrainDatasTagRequest::CreateTrainDatasTagRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "CreateTrainDatasTag")
{}

CreateTrainDatasTagRequest::~CreateTrainDatasTagRequest()
{}

long CreateTrainDatasTagRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateTrainDatasTagRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long CreateTrainDatasTagRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateTrainDatasTagRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool CreateTrainDatasTagRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateTrainDatasTagRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateTrainDatasTagRequest::getDataIds()const
{
	return dataIds_;
}

void CreateTrainDatasTagRequest::setDataIds(const std::string& dataIds)
{
	dataIds_ = dataIds;
	setParameter("DataIds", dataIds);
}

std::string CreateTrainDatasTagRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateTrainDatasTagRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateTrainDatasTagRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateTrainDatasTagRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateTrainDatasTagRequest::getCallerType()const
{
	return callerType_;
}

void CreateTrainDatasTagRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string CreateTrainDatasTagRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateTrainDatasTagRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateTrainDatasTagRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateTrainDatasTagRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateTrainDatasTagRequest::getRegionId()const
{
	return regionId_;
}

void CreateTrainDatasTagRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateTrainDatasTagRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateTrainDatasTagRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string CreateTrainDatasTagRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateTrainDatasTagRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateTrainDatasTagRequest::getProjectId()const
{
	return projectId_;
}

void CreateTrainDatasTagRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

std::string CreateTrainDatasTagRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateTrainDatasTagRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long CreateTrainDatasTagRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateTrainDatasTagRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string CreateTrainDatasTagRequest::getShowLog()const
{
	return showLog_;
}

void CreateTrainDatasTagRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string CreateTrainDatasTagRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateTrainDatasTagRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string CreateTrainDatasTagRequest::getPopProduct()const
{
	return popProduct_;
}

void CreateTrainDatasTagRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string CreateTrainDatasTagRequest::getTagId()const
{
	return tagId_;
}

void CreateTrainDatasTagRequest::setTagId(const std::string& tagId)
{
	tagId_ = tagId;
	setParameter("TagId", tagId);
}

std::string CreateTrainDatasTagRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateTrainDatasTagRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long CreateTrainDatasTagRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateTrainDatasTagRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateTrainDatasTagRequest::getVersion()const
{
	return version_;
}

void CreateTrainDatasTagRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool CreateTrainDatasTagRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateTrainDatasTagRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateTrainDatasTagRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateTrainDatasTagRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateTrainDatasTagRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateTrainDatasTagRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateTrainDatasTagRequest::getRequestId()const
{
	return requestId_;
}

void CreateTrainDatasTagRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

