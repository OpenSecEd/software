SUBDIR+= 	intro
SUBDIR+=	broken-abstractions
SUBDIR+= 	memory-management
SUBDIR+= 	malware
SUBDIR+= 	stacksmashlab/
SUBDIR+= 	malwarelab/

INCLUDE_MAKEFILES=makefiles
include ${INCLUDE_MAKEFILES}/subdir.mk
