#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_MainWindow.h" // Ui::MainWindow

#include <Common/path.h>            // CPath
#include <Project64-core/AppInit.h> // AppInit
#include <Project64-core/N64System/SystemGlobals.h>
#include <Project64-core/Plugins/PluginClass.h>

class MainWindow : public QMainWindow, public RenderWindow, private Ui::MainWindow
{
    Q_OBJECT

  public:
    MainWindow(QMainWindow *);
    // TODO
    bool ResetPluginsInUiThread(CPlugins *plugins, CN64System *System)
    {
        return true;
    };
    void *GetWindowHandle(void)
    {
        return nullptr;
    };
    void *GetStatusBar(void)
    {
        return nullptr;
    };
    void *GetModuleInstance(void)
    {
        return nullptr;
    };
};

#endif // MAINWINDOW_H