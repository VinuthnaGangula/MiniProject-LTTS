PROJ_NAME = TDQ

TEST_PROJ_NAME = TEST_$(PROJ_NAME)

BUILD_DIR = Build

INC = -I inc -I unity

SRC = src/daemonList.c src/daemonDetails.c src/fileToStruct.c

TEST = test/test_fun.c unity/unity.c

ifdef OS
	RM = del /q
	FixPath= $(subst /, \, $1)
	EXEC = exe
else
	ifeq ($(shell uname), Linux)
		RM = rm -rf
		FixPath = $1
		EXEC = out
	endif
endif

.PHONY: all test run clean

all: $(BUILD_DIR)
	gcc main.c $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

test: $(SRC) $(TEST)
	gcc $^  $(INC) -o $(call FixPath, $(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath, $(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

run: all
	$(call FixPath, $(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	$(RM) $(call FixPath, $(BUILD_DIR)/*)
	rmdir $(BUILD_DIR)