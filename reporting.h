// Copyright (c) 2010, Nicholas "Indy" Ray. All rights reserved.
// See the LICENSE file for usage, modification, and distribution terms.
#include <cstdlib>

enum log_level
{
    LOG_INFO,
    LOG_WARN,
    LOG_ERR
};

void log(log_level, const char*);
void log_own_buffer(log_level l, char* b);
