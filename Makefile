NAME = webserv

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -pedantic
CXXVERSION = -std=c++98

OBJS_DIR = build

HPP = include/main.hpp \
	include/AAppConstants.hpp \
	include/AException.hpp \
	include/ExceptionFactory.hpp \
	include/ExceptionManager.hpp \
	include/ExceptionsWrapper.hpp \
	include/IColorizer.hpp \
	include/ILogger.hpp \
	include/LoggerError.hpp \
	include/LoggerInfo.hpp \
	include/LoggerMapper.hpp \
	include/LoggerWarn.hpp \
	include/LogManager.hpp \
	include/Utils.hpp \
	include/ValidationUtils.hpp 




SRCS = srcs/main.cpp \
	srcs/AAppConstants.cpp \
	srcs/ExceptionFactory.cpp \
	srcs/ExceptionManager.cpp \
	srcs/ExceptionsWrapper.cpp \
	srcs/LoggerError.cpp \
	srcs/LoggerInfo.cpp \
	srcs/LoggerMapper.cpp \
	srcs/LoggerWarn.cpp \
	srcs/LogManager.cpp \
	srcs/Utils.cpp \
	srcs/ValidationUtils.cpp 

OBJS = $(SRCS:%.cpp=$(OBJS_DIR)/%.o)


RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
PURPLE = \033[1;34m
RESET = \033[0m

RM = rm
RMFLAGS = -rf

all: $(NAME)

$(NAME): $(OBJS)
	@printf "$(YELLOW)Building: $(PURPLE)%s$(RESET)\n" $@
	@$(CXX) $(CXXVERSION) $(CXXFLAGS) $(OBJS) -o $@


$(OBJS_DIR)/%.o: %.cpp $(HPP)
	@mkdir -p $(dir $@)
	@printf "$(YELLOW)Compiling: $(PURPLE)%s$(RESET)\n" $<
	@$(CXX) $(CXXVERSION) $(CXXFLAGS) -Iinclude -c $< -o $@

clean:
	@printf "$(YELLOW)Cleaning object files: $(PURPLE)%s$(RESET)\n" $(OBJS)
	@$(RM) $(RMFLAGS) $(OBJS_DIR)


fclean: clean
	@printf "$(YELLOW)Removing executable: $(PURPLE)%s$(RESET)\n" $(NAME)
	@$(RM) $(RMFLAGS) $(NAME)

re: fclean all

ARGS = file.ini
run : $(NAME)
	@printf "$(YELLOW)Running $(PURPLE)%s$(RESET)\n" $(NAME)
	@exec ./$(NAME) $(ARGS)

.PHONY: all clean fclean re