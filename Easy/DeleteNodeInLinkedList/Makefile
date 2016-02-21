#Compiler and Linker
CC          := g++

#The Target Binary Program
TARGET      := Solution

#The Directories, Source, Includes, Objects, Binary and Resources
SRCDIR      := src
INCDIR      := inc
LIBDIR      := lib
BUILDDIR    := obj
TARGETDIR   := bin
TESTDIR     := tests
RESDIR      := res
SRCEXT      := cpp
DEPEXT      := d
OBJEXT      := o

#Flags, Libraries and Includes
CFLAGS      := -Wall -O3 -g
#LIB         := -L$(LIBDIR)
LIB         := 
INC         := -I$(INCDIR)
INCDEP      := -I$(INCDIR)

TEST_OBJ    :=

# add GTest library into the executable
GTEST_DIR   := ../../thirdParty/gtest-1.7.0
#GTEST_SRC   := $(shell find $(SRCDIR) -type f -name *_gtest.$(SRCEXT))
#GTEST_OBJ   := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(GTEST_SRC:.$(SRCEXT)=.$(OBJEXT)))
INC         += -I$(GTEST_DIR)/include
LIB         += -L$(GTEST_DIR)/make/ -lgtest_main

#---------------------------------------------------------------------------------
#DO NOT EDIT BELOW THIS LINE
#---------------------------------------------------------------------------------
SOURCES     := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS     := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.$(OBJEXT)))

#Defauilt Make
all: resources $(TARGET)

#Remake
remake: clean all

#Copy Resources from Resources Directory to Target Directory
resources: directories
#	@cp -rf $(RESDIR)/ $(TARGETDIR)/

#Make the Directories
directories:
	@mkdir -p $(TARGETDIR)
	@mkdir -p $(BUILDDIR)

#Clean Objecst and Binaries
clean:
	@$(RM) -rf $(BUILDDIR)
	@$(RM) -rf $(TARGETDIR)

#Pull in dependency info for *existing* .o files
-include $(OBJECTS:.$(OBJEXT)=.$(DEPEXT))

#Link
$(TARGET): $(OBJECTS)
	$(CC) $(LIB) -o $(TARGETDIR)/$(TARGET) $(OBJECTS)

#Compile
$(BUILDDIR)/%.$(OBJEXT): $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INC) -c -o $@ $<
#	@$(CC) $(CFLAGS) $(INCDEP) -MM $(SRCDIR)/$*.$(SRCEXT) > $(BUILDDIR)/$*.$(DEPEXT)
#	@cp -f $(BUILDDIR)/$*.$(DEPEXT) $(BUILDDIR)/$*.$(DEPEXT).tmp
#	@sed -e 's|.*:|$(BUILDDIR)/$*.$(OBJEXT):|' < $(BUILDDIR)/$*.$(DEPEXT).tmp > $(BUILDDIR)/$*.$(DEPEXT)
#	@sed -e 's/.*://' -e 's/\\$$//' < $(BUILDDIR)/$*.$(DEPEXT).tmp | fmt -1 | sed -e 's/^ *//' -e 's/$$/:/' >> $(BUILDDIR)/$*.$(DEPEXT)
	@rm -f $(BUILDDIR)/$*.$(DEPEXT).tmp

#Non-File Targets
.PHONY: all remake clean cleaner resources
