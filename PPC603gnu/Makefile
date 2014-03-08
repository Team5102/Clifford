# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/Users/Team\ 5102/Desktop/Coding/Workspaces/windriver
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/Clifford



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = Clifford_partialImage/$(MODE_DIR)/Clifford_partialImage.out \
	 Clifford/$(MODE_DIR)/Clifford.out


#Rules

# Clifford_partialImage
ifeq ($(DEBUG_MODE),1)
Clifford_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
Clifford_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
Clifford_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
Clifford_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Clifford_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Clifford_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
Clifford_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
Clifford_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
Clifford_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
Clifford_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Clifford_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Clifford_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
Clifford_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
Clifford_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
Clifford_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
Clifford_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
Clifford_partialImage/$(MODE_DIR)/% : DEFINES = 
Clifford_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
Clifford_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
Clifford_partialImage/$(MODE_DIR)/% : CPU = PPC603
Clifford_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
Clifford_partialImage/$(MODE_DIR)/% : TOOL = gnu
Clifford_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
Clifford_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
Clifford_partialImage/$(MODE_DIR)/% : LIBPATH = 
Clifford_partialImage/$(MODE_DIR)/% : LIBS = 
Clifford_partialImage/$(MODE_DIR)/% : OBJ_DIR := Clifford_partialImage/$(MODE_DIR)

Clifford_partialImage/$(MODE_DIR)/Objects/Autonomous.o : $(PRJ_ROOT_DIR)/Autonomous.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Clifford_partialImage/$(MODE_DIR)/Objects/Camera.o : $(PRJ_ROOT_DIR)/Camera.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Clifford_partialImage/$(MODE_DIR)/Objects/myArcadeDrive.o : $(PRJ_ROOT_DIR)/myArcadeDrive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Clifford_partialImage/$(MODE_DIR)/Objects/OperatorControl.o : $(PRJ_ROOT_DIR)/OperatorControl.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Clifford_partialImage/$(MODE_DIR)/Objects/OurRobot.o : $(PRJ_ROOT_DIR)/OurRobot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Clifford_partialImage/$(MODE_DIR)/Objects/Axis.o : $(PRJ_ROOT_DIR)/util/Axis.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Clifford_partialImage/$(MODE_DIR)/Objects/Xbox.o : $(PRJ_ROOT_DIR)/util/Xbox.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Clifford_partialImage/$(MODE_DIR)/Objects/DriverStation.o : $(PRJ_ROOT_DIR)/util/DriverStation.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Clifford_partialImage/$(MODE_DIR)/Objects/Shooter.o : $(PRJ_ROOT_DIR)/Shooter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_Clifford_partialImage = Clifford_partialImage/$(MODE_DIR)/Objects/Autonomous.o \
	 Clifford_partialImage/$(MODE_DIR)/Objects/Camera.o \
	 Clifford_partialImage/$(MODE_DIR)/Objects/myArcadeDrive.o \
	 Clifford_partialImage/$(MODE_DIR)/Objects/OperatorControl.o \
	 Clifford_partialImage/$(MODE_DIR)/Objects/OurRobot.o \
	 Clifford_partialImage/$(MODE_DIR)/Objects/Axis.o \
	 Clifford_partialImage/$(MODE_DIR)/Objects/Xbox.o \
	 Clifford_partialImage/$(MODE_DIR)/Objects/DriverStation.o \
	 Clifford_partialImage/$(MODE_DIR)/Objects/Shooter.o

Clifford_partialImage/$(MODE_DIR)/Clifford_partialImage.out : $(OBJECTS_Clifford_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_Clifford_partialImage) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_Clifford_partialImage) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

Clifford_partialImage/$(MODE_DIR)/Clifford_partialImage_compile_file : $(FILE) ;

_clean :: Clifford_partialImage/$(MODE_DIR)/Clifford_partialImage_clean

Clifford_partialImage/$(MODE_DIR)/Clifford_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "Clifford_partialImage" ]; then cd "Clifford_partialImage"; rm -rf $(MODE_DIR); fi


# Clifford
ifeq ($(DEBUG_MODE),1)
Clifford/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
Clifford/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
Clifford/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
Clifford/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Clifford/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Clifford/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
Clifford/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
Clifford/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
Clifford/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
Clifford/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Clifford/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Clifford/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
Clifford/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
Clifford/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
Clifford/$(MODE_DIR)/% : IDE_DEFINES = 
Clifford/$(MODE_DIR)/% : PROJECT_TYPE = DKM
Clifford/$(MODE_DIR)/% : DEFINES = 
Clifford/$(MODE_DIR)/% : EXPAND_DBG = 0
Clifford/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
Clifford/$(MODE_DIR)/% : CPU = PPC603
Clifford/$(MODE_DIR)/% : TOOL_FAMILY = gnu
Clifford/$(MODE_DIR)/% : TOOL = gnu
Clifford/$(MODE_DIR)/% : TOOL_PATH = 
Clifford/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
Clifford/$(MODE_DIR)/% : LIBPATH = 
Clifford/$(MODE_DIR)/% : LIBS = 
Clifford/$(MODE_DIR)/% : OBJ_DIR := Clifford/$(MODE_DIR)

Clifford/$(MODE_DIR)/Objects/Clifford/Autonomous.o : $(PRJ_ROOT_DIR)/Autonomous.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Clifford/$(MODE_DIR)/Objects/Clifford/Camera.o : $(PRJ_ROOT_DIR)/Camera.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Clifford/$(MODE_DIR)/Objects/Clifford/OperatorControl.o : $(PRJ_ROOT_DIR)/OperatorControl.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Clifford/$(MODE_DIR)/Objects/Clifford/OurRobot.o : $(PRJ_ROOT_DIR)/OurRobot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Clifford/$(MODE_DIR)/Objects/Clifford/Shooter.o : $(PRJ_ROOT_DIR)/Shooter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Clifford/$(MODE_DIR)/Objects/Clifford/myArcadeDrive.o : $(PRJ_ROOT_DIR)/myArcadeDrive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Clifford/$(MODE_DIR)/Objects/Clifford/util/Axis.o : $(PRJ_ROOT_DIR)/util/Axis.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Clifford/$(MODE_DIR)/Objects/Clifford/util/DriverStation.o : $(PRJ_ROOT_DIR)/util/DriverStation.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Clifford/$(MODE_DIR)/Objects/Clifford/util/Xbox.o : $(PRJ_ROOT_DIR)/util/Xbox.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_Clifford = Clifford/$(MODE_DIR)/Objects/Clifford/Autonomous.o \
	 Clifford/$(MODE_DIR)/Objects/Clifford/Camera.o \
	 Clifford/$(MODE_DIR)/Objects/Clifford/OperatorControl.o \
	 Clifford/$(MODE_DIR)/Objects/Clifford/OurRobot.o \
	 Clifford/$(MODE_DIR)/Objects/Clifford/Shooter.o \
	 Clifford/$(MODE_DIR)/Objects/Clifford/myArcadeDrive.o \
	 Clifford/$(MODE_DIR)/Objects/Clifford/util/Axis.o \
	 Clifford/$(MODE_DIR)/Objects/Clifford/util/DriverStation.o \
	 Clifford/$(MODE_DIR)/Objects/Clifford/util/Xbox.o

Clifford/$(MODE_DIR)/Clifford.out : $(OBJECTS_Clifford)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_Clifford) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_Clifford) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

Clifford/$(MODE_DIR)/Clifford_compile_file : $(FILE) ;

_clean :: Clifford/$(MODE_DIR)/Clifford_clean

Clifford/$(MODE_DIR)/Clifford_clean : 
	$(TRACE_FLAG)if [ -d "Clifford" ]; then cd "Clifford"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := Clifford_partialImage/$(MODE_DIR)/Objects/Autonomous.d Clifford_partialImage/$(MODE_DIR)/Objects/Camera.d Clifford_partialImage/$(MODE_DIR)/Objects/myArcadeDrive.d \
	 Clifford_partialImage/$(MODE_DIR)/Objects/OperatorControl.d Clifford_partialImage/$(MODE_DIR)/Objects/OurRobot.d Clifford_partialImage/$(MODE_DIR)/Objects/Axis.d \
	 Clifford_partialImage/$(MODE_DIR)/Objects/Xbox.d Clifford_partialImage/$(MODE_DIR)/Objects/DriverStation.d Clifford_partialImage/$(MODE_DIR)/Objects/Shooter.d \
	 Clifford/$(MODE_DIR)/Objects/Clifford/Autonomous.d Clifford/$(MODE_DIR)/Objects/Clifford/Camera.d Clifford/$(MODE_DIR)/Objects/Clifford/OperatorControl.d \
	 Clifford/$(MODE_DIR)/Objects/Clifford/OurRobot.d Clifford/$(MODE_DIR)/Objects/Clifford/Shooter.d Clifford/$(MODE_DIR)/Objects/Clifford/myArcadeDrive.d \
	 Clifford/$(MODE_DIR)/Objects/Clifford/util/Axis.d Clifford/$(MODE_DIR)/Objects/Clifford/util/DriverStation.d Clifford/$(MODE_DIR)/Objects/Clifford/util/Xbox.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
