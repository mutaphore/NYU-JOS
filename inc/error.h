/* See COPYRIGHT for copyright information. */

#ifndef JOS_INC_ERROR_H
#define JOS_INC_ERROR_H

enum {
	// Kernel error codes -- keep in sync with list in lib/printfmt.c.
	E_UNSPECIFIED	= 1,	// Unspecified or unknown problem
	E_BAD_ENV	,	// Environment doesn't exist or otherwise
				// cannot be used in requested action
	E_INVAL		,	// Invalid parameter
	E_NO_MEM	,	// Request failed due to memory shortage
	E_NO_FREE_ENV	,	// Attempt to create a new environment beyond
				// the maximum allowed
	E_FAULT		,	// Memory fault

	E_IPC_NOT_RECV	,	// Attempt to send to env that is not recving
	E_EOF		,	// Unexpected end of file

	// File system error codes -- only seen in user-level
	E_NO_DISK	,	// No free space left on disk
	E_MAX_OPEN	,	// Too many files are open
	E_NOT_FOUND	, 	// File or block not found
	E_BAD_PATH	,	// Bad path
	E_FILE_EXISTS	,	// File already exists
	E_NOT_EXEC	,	// File not a valid executable
	E_NOT_SUPP	,	// Operation not supported

   // Network system error codes
   E_PCKT_DROP  ,    // Transmit packet dropped
   E_PCKT_SIZE  ,    // Exceeded maximum size per packet
   E_PCKT_NONE  ,    // No packets received

   // FlexSC
	E_BLOCKED	,	// Used by FlexSC only: we're blocked on I/O
	MAXERROR
};

#endif	// !JOS_INC_ERROR_H */
