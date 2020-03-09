#include "Notification.h"
#include <iostream>

Notification::Notification(void)
{
}

// Error Messages
void Notification::DisplayError(const char *msg) const
{
    std::cout << __FUNCTION__ << ":" << msg << std::endl;
}
void Notification::DisplayError(LanguageStringID id) const
{
}

void Notification::FatalError(const char *msg) const
{
    std::cout << __FUNCTION__ << ":" << msg << std::endl;
}
void Notification::FatalError(LanguageStringID id) const
{
}

void Notification::DisplayWarning(const char *msg) const
{
    std::cout << __FUNCTION__ << ":" << msg << std::endl;
}
void Notification::DisplayWarning(LanguageStringID id) const
{
}

void Notification::DisplayMessage(int time, const char *msg) const
{
    std::cout << __FUNCTION__ << ":" << msg << std::endl;
}
void Notification::DisplayMessage(int time, LanguageStringID id) const
{
}
void Notification::DisplayMessage2(const char *msg) const
{
    std::cout << __FUNCTION__ << ":" << msg << std::endl;
}

bool Notification::AskYesNoQuestion(const char *text) const
{
    std::cout << __FUNCTION__ << ":" << text << std::endl;

    return true;
}

void Notification::BreakPoint(const char *file, int32_t line)
{
}

void Notification::AppInitDone(void)
{
}
bool Notification::ProcessGuiMessages(void) const
{
    return true;
}
void Notification::ChangeFullScreen(void) const
{
}