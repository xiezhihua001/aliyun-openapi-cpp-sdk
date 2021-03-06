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

#include <alibabacloud/rtc/model/RemoveParticipantsRequest.h>

using AlibabaCloud::Rtc::Model::RemoveParticipantsRequest;

RemoveParticipantsRequest::RemoveParticipantsRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "RemoveParticipants")
{}

RemoveParticipantsRequest::~RemoveParticipantsRequest()
{}

std::string RemoveParticipantsRequest::getApp_ip()const
{
	return app_ip_;
}

void RemoveParticipantsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string RemoveParticipantsRequest::getPopProduct()const
{
	return popProduct_;
}

void RemoveParticipantsRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::vector<std::string> RemoveParticipantsRequest::getParticipantIds()const
{
	return participantIds_;
}

void RemoveParticipantsRequest::setParticipantIds(const std::vector<std::string>& participantIds)
{
	participantIds_ = participantIds;
	for(int i = 0; i!= participantIds.size(); i++)
		setParameter("ParticipantIds."+ std::to_string(i), participantIds.at(i));
}

long RemoveParticipantsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void RemoveParticipantsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool RemoveParticipantsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void RemoveParticipantsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string RemoveParticipantsRequest::getCallerBid()const
{
	return callerBid_;
}

void RemoveParticipantsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long RemoveParticipantsRequest::getOwnerId()const
{
	return ownerId_;
}

void RemoveParticipantsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string RemoveParticipantsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void RemoveParticipantsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string RemoveParticipantsRequest::getVersion()const
{
	return version_;
}

void RemoveParticipantsRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string RemoveParticipantsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void RemoveParticipantsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string RemoveParticipantsRequest::getCallerType()const
{
	return callerType_;
}

void RemoveParticipantsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool RemoveParticipantsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void RemoveParticipantsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool RemoveParticipantsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void RemoveParticipantsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string RemoveParticipantsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RemoveParticipantsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool RemoveParticipantsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void RemoveParticipantsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string RemoveParticipantsRequest::getSecurityToken()const
{
	return securityToken_;
}

void RemoveParticipantsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string RemoveParticipantsRequest::getConferenceId()const
{
	return conferenceId_;
}

void RemoveParticipantsRequest::setConferenceId(const std::string& conferenceId)
{
	conferenceId_ = conferenceId;
	setParameter("ConferenceId", conferenceId);
}

std::string RemoveParticipantsRequest::getRequestId()const
{
	return requestId_;
}

void RemoveParticipantsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string RemoveParticipantsRequest::getRequestContent()const
{
	return requestContent_;
}

void RemoveParticipantsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string RemoveParticipantsRequest::getAppId()const
{
	return appId_;
}

void RemoveParticipantsRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string RemoveParticipantsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void RemoveParticipantsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string RemoveParticipantsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void RemoveParticipantsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long RemoveParticipantsRequest::getCallerUid()const
{
	return callerUid_;
}

void RemoveParticipantsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

