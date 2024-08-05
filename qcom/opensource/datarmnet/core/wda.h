/* SPDX-License-Identifier: GPL-2.0-only */
/* Copyright (c) 2018,2021, The Linux Foundation. All rights reserved.
 * Copyright (c) 2022 Qualcomm Innovation Center, Inc. All rights reserved.
 */
#include <linux/version.h>
#undef TRACE_SYSTEM
#define TRACE_SYSTEM wda
#undef TRACE_INCLUDE_PATH

#if defined(RMNET_LA_PLATFORM)
	#ifdef CONFIG_ARCH_KHAJE
		#define TRACE_INCLUDE_PATH ../../../../../sm7550-modules/qcom/opensource/datarmnet/core
	#else
		#define TRACE_INCLUDE_PATH ../../../../sm7550-modules/qcom/opensource/datarmnet/core
	#endif
#elif defined(__arch_um__)
	#define TRACE_INCLUDE_PATH ../../datarmnet/core
#elif defined(RMNET_TRACE_INCLUDE_LE)
	#define TRACE_INCLUDE_PATH ../../../../../../../datarmnet/core
#else
	#define TRACE_INCLUDE_PATH ../../../../../../../src/datarmnet/core
#endif /* defined(RMNET_LA_PLATFORM) */

#define TRACE_INCLUDE_FILE wda

#if !defined(_TRACE_WDA_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_WDA_H

#include <linux/tracepoint.h>

TRACE_EVENT(wda_set_powersave_mode,

	TP_PROTO(int enable),

	TP_ARGS(enable),

	TP_STRUCT__entry(
		__field(int, enable)
	),

	TP_fast_assign(
		__entry->enable = enable;
	),

	TP_printk("set powersave mode to %s",
		__entry->enable ? "enable" : "disable")
);

TRACE_EVENT(wda_client_state_up,

	TP_PROTO(u32 instance, u32 ep_type, u32 iface),

	TP_ARGS(instance, ep_type, iface),

	TP_STRUCT__entry(
		__field(u32, instance)
		__field(u32, ep_type)
		__field(u32, iface)
	),

	TP_fast_assign(
		__entry->instance = instance;
		__entry->ep_type = ep_type;
		__entry->iface = iface;
	),

	TP_printk("Client: Connected with WDA instance=%u ep_type=%u i_id=%u",
		__entry->instance, __entry->ep_type, __entry->iface)
);

TRACE_EVENT(wda_client_state_down,

	TP_PROTO(int from_cb),

	TP_ARGS(from_cb),

	TP_STRUCT__entry(
		__field(int, from_cb)
	),

	TP_fast_assign(
		__entry->from_cb = from_cb;
	),

	TP_printk("Client: Connection with WDA lost Exit by callback %d",
		  __entry->from_cb)
);

#endif /* _TRACE_WDA_H */

/* This part must be outside protection */
#include <trace/define_trace.h>
