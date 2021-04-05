//==============================================================================
//
//  OvenMediaEngine
//
//  Created by Jaejong Bong
//  Copyright (c) 2019 AirenSoft. All rights reserved.
//
//==============================================================================
#pragma once

#include <publishers/segment/segment_stream/segment_stream_interceptor.h>

class HlsInterceptor : public SegmentStreamInterceptor
{
public:
    HlsInterceptor();
	~HlsInterceptor();

protected:

    //--------------------------------------------------------------------
	// Implementation of HttpRequestInterceptorInterface
	//--------------------------------------------------------------------
	bool IsInterceptorForRequest(const std::shared_ptr<const HttpConnection> &client) override;
};
