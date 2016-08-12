#pragma once
#include <stdafx.h>
#include "traceStructs.h"
#include "GUIStructs.h"

class graph_renderer
{
public:
	//thread_start_data startData;
	static void __stdcall ThreadEntry(void* pUserData);
	int PID;
	bool sizeChanged;
	PID_DATA *piddata = 0;
	VISSTATE *clientState;

protected:
	unsigned int focusedThread = -1;

private:
	void rendering_thread();

};
