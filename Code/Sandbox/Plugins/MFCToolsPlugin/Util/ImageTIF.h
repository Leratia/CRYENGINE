// Copyright 2001-2018 Crytek GmbH / Crytek Group. All rights reserved.

#pragma once

class PLUGIN_API CImageTIF
{
public:
	bool               Load(const string& fileName, CImageEx& outImage);
	bool               SaveRAW(const string& fileName, const void* pData, int width, int height, int bytesPerChannel, int numChannels, bool bFloat, const char* preset);
	static const char* GetPreset(const string& fileName);
};
