#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <Project64-core/Notification.h> // CNotification

class Notification : public CNotification
{
  public:
    Notification(void);
    // Error Messages
    void DisplayError(const char *) const;
    void DisplayError(LanguageStringID) const;

    void FatalError(const char *) const;
    void FatalError(LanguageStringID) const;

    // User Feedback
    void DisplayWarning(const char *) const;
    void DisplayWarning(LanguageStringID) const;

    void DisplayMessage(int, const char *) const;
    void DisplayMessage(int, LanguageStringID) const;
    void DisplayMessage2(const char *) const;

    // Ask a Yes/No Question to the user, yes = true, no = false
    bool AskYesNoQuestion(const char *) const;

    void BreakPoint(const char *, int32_t);

    void AppInitDone(void);
    bool ProcessGuiMessages(void) const;
    void ChangeFullScreen(void) const;
};

#endif // NOTIFICATION_H