﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/Trail.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudTrail
{
namespace Model
{
  /**
   * <p>Returns the objects or data listed below if successful. Otherwise, returns an
   * error.</p>
   */
  class AWS_CLOUDTRAIL_API DescribeTrailsResult
  {
  public:
    DescribeTrailsResult();
    DescribeTrailsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTrailsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The list of trail objects.</p>
     */
    inline const Aws::Vector<Trail>& GetTrailList() const{ return m_trailList; }

    /**
     * <p>The list of trail objects.</p>
     */
    inline void SetTrailList(const Aws::Vector<Trail>& value) { m_trailList = value; }

    /**
     * <p>The list of trail objects.</p>
     */
    inline void SetTrailList(Aws::Vector<Trail>&& value) { m_trailList = value; }

    /**
     * <p>The list of trail objects.</p>
     */
    inline DescribeTrailsResult& WithTrailList(const Aws::Vector<Trail>& value) { SetTrailList(value); return *this;}

    /**
     * <p>The list of trail objects.</p>
     */
    inline DescribeTrailsResult& WithTrailList(Aws::Vector<Trail>&& value) { SetTrailList(value); return *this;}

    /**
     * <p>The list of trail objects.</p>
     */
    inline DescribeTrailsResult& AddTrailList(const Trail& value) { m_trailList.push_back(value); return *this; }

    /**
     * <p>The list of trail objects.</p>
     */
    inline DescribeTrailsResult& AddTrailList(Trail&& value) { m_trailList.push_back(value); return *this; }

  private:
    Aws::Vector<Trail> m_trailList;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
