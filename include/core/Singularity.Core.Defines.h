#pragma once

#ifndef SINGULARITY_IDLE_WAIT
#define SINGULARITY_IDLE_WAIT 0
#endif

#ifndef SINGULARITY_THREADING_MAX_THREADS
#define SINGULARITY_THREADING_MAX_THREADS 32		// maximum number of worker threads we expect to encounter
#endif

#ifndef SINGULARITY_THREADING_MAX_TASKS
#define SINGULARITY_THREADING_MAX_TASKS	40			// maximum capacity of a task queue
#endif

#ifndef SINGULARITY_THREADING_STACKSIZE
#define SINGULARITY_THREADING_STACKSIZE 64 * 1024	// worker threads stack size: 64K
#endif

#define TASKPOOL_OPTION_NONE			0x00000000
#define TASKPOOL_OPTION_SINGLETHREADED	0x00000001

#define TASKPOOL_STATE_UNINITIALIZED	0x00000000
#define TASKPOOL_STATE_INITIALIZED		0x00000001
#define TASKPOOL_STATE_STARTING			0x00000002
#define TASKPOOL_STATE_STARTED			0x00000003
#define TASKPOOL_STATE_IDLE				0x00000004
#define TASKPOOL_STATE_STOPPING			0x00000005
#define TASKPOOL_STATE_STOPPED			0x00000006

#define TASKPOOL_AFFINITY_HIGHEST		0x00000001
#define TASKPOOL_AFFINITY_HIGH			0x00000002
#define TASKPOOL_AFFINITY_NORMAL		0x00000003
#define TASKPOOL_AFFINITY_LOW			0x00000004
#define TASKPOOL_AFFINITY_LOWEST		0x00000005

#ifndef SINGULARITY_MAX_GAMEOBJECTS
#define SINGULARITY_MAX_GAMEOBJECTS 100000
#endif

#ifndef SINGULARITY_MAX_GRAPH_DEPTH
#define SINGULARITY_MAX_GRAPH_DEPTH 6
#endif