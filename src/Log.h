#ifndef FALLOUTSBXCLIENT_LOG_H
#define FALLOUTSBXCLIENT_LOG_H

#include <Windows.h>
#include <iostream>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/async.h>

#define LOG_INIT() { \
       AllocConsole();  \
       freopen_s((FILE**)stdout, "CONOUT$", "w", stdout); \
       auto console_log = spdlog::stdout_color_mt("console_log");      \
       auto file_log = spdlog::basic_logger_mt<spdlog::async_factory>("file_log", "f4sbx/log.txt"); \
       spdlog::set_default_logger(console_log);\
}

#define LOG_INFO(fmt, ...){ \
	spdlog::get("console_log")->info(fmt, __VA_ARGS__); \
	spdlog::get("file_log")->info(fmt, __VA_ARGS__);\
}

#define LOG_WARN(fmt, ...){ \
	spdlog::get("console_log")->warn(fmt, __VA_ARGS__); \
	spdlog::get("file_log")->warn(fmt, __VA_ARGS__);\
}

#define LOG_ERR(fmt, ...){ \
	spdlog::get("console_log")->warn(fmt, __VA_ARGS__); \
	spdlog::get("file_log")->warn(fmt, __VA_ARGS__);\
}


#endif //FALLOUTSBXCLIENT_LOG_H
