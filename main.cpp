
// #include "Logger.h" da creare !!!
#include <chrono>
#include <iomanip>
#include <sstream>
#include <iostream>
#include <filesystem>

namespace Logger
{

    std::ofstream Logger::logFile;

    void Logger::Init()
    // creare il file di log
    {
        // crea  la cartella logs se non esiste
        // crea un file es: log_[date]_[version]_[debug].log
    }

    void Logger::SetConsoleOutput()
    {
        // attiva il console
    }

    void Logger::SetFileOutput()
    {
        // attiva il salvataggio dei log in un file es : log_[date]_[version]_[debug].log
    }

    void Logger::Write()
    {
        // scrivi nel file i log
    }

    std::string Logger::LevelToString(LogLevel level)
    {
        switch (level)
        {
        case LogLevel::Info:
            return "INFO";
        case LogLevel::Warning:
            return "WARN";
        case LogLevel::Error:
            return "ERROR";
        case LogLevel::Debug:
            return "DEBUG";
        default:
            return "UNKNOWN";
        }
    }
    
    //ora del log
    std::string Logger::GetTimestamp()
    {
        auto now = std::chrono::system_clock::now();
        auto time = std::chrono::system_clock::to_time_t(now);
        std::stringstream ss;
        ss << std::put_time(std::localtime(&time), "%Y-%m-%d %H:%M:%S");
        return ss.str();
    }

    void Logger::Log()
    {
        // log
    }

}