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

#ifndef ALIBABACLOUD_OTS_MODEL_UNBINDINSTANCE2VPCREQUEST_H_
#define ALIBABACLOUD_OTS_MODEL_UNBINDINSTANCE2VPCREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ots/OtsExport.h>

namespace AlibabaCloud
{
	namespace Ots
	{
		namespace Model
		{
			class ALIBABACLOUD_OTS_EXPORT UnbindInstance2VpcRequest : public RpcServiceRequest
			{

			public:
				UnbindInstance2VpcRequest();
				~UnbindInstance2VpcRequest();

				std::string getAccess_key_id()const;
				void setAccess_key_id(const std::string& access_key_id);
				std::string getInstanceVpcName()const;
				void setInstanceVpcName(const std::string& instanceVpcName);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getInstanceName()const;
				void setInstanceName(const std::string& instanceName);
				std::string getRegionNo()const;
				void setRegionNo(const std::string& regionNo);

            private:
				std::string access_key_id_;
				std::string instanceVpcName_;
				long resourceOwnerId_;
				std::string instanceName_;
				std::string regionNo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OTS_MODEL_UNBINDINSTANCE2VPCREQUEST_H_