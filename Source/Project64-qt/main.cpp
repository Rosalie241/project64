/*
 MotorolaFlash - https://github.com/tim241/MotorolaFlash
 Copyright (C) 2020 Tim Wanders <tim241@mailbox.org>
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "UserInterface/MainWindow.h"
#include "UserInterface/Notification.h"
#include <Project64-core/N64System/N64Class.h>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Notification n;
    AppInit(&n, CPath(CPath::MODULE_DIRECTORY), argc, argv);

    // let's not quit when we close a dialog
    app.setQuitOnLastWindowClosed(false);

    MainWindow ui(new QMainWindow());

    try
    {
        g_Plugins->SetRenderWindows(&ui, &ui);
    }
    catch (...)
    {
        std::cout << "I did it" << std::endl;
    }

    ui.show();

    CN64System::RunFileImage("controllertest.z64");

    return app.exec();
}