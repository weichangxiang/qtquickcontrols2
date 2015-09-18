/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the Qt Quick Controls module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL3$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see http://www.qt.io/terms-conditions. For further
** information use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPLv3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or later as published by the Free
** Software Foundation and appearing in the file LICENSE.GPL included in
** the packaging of this file. Please review the following information to
** ensure the GNU General Public License version 2.0 requirements will be
** met: http://www.gnu.org/licenses/gpl-2.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include <QtQml/qqmlextensionplugin.h>

#include <QtQuickTemplates/private/qquickapplicationwindow_p.h>
#include <QtQuickTemplates/private/qquickbusyindicator_p.h>
#include <QtQuickTemplates/private/qquickbutton_p.h>
#include <QtQuickTemplates/private/qquickcheckbox_p.h>
#include <QtQuickTemplates/private/qquickcontrol_p.h>
#include <QtQuickTemplates/private/qquickcontainer_p.h>
#include <QtQuickTemplates/private/qquickframe_p.h>
#include <QtQuickTemplates/private/qquickgroupbox_p.h>
#include <QtQuickTemplates/private/qquicklabel_p.h>
#include <QtQuickTemplates/private/qquickpageindicator_p.h>
#include <QtQuickTemplates/private/qquickprogressbar_p.h>
#include <QtQuickTemplates/private/qquickradiobutton_p.h>
#include <QtQuickTemplates/private/qquickscrollbar_p.h>
#include <QtQuickTemplates/private/qquickscrollindicator_p.h>
#include <QtQuickTemplates/private/qquickslider_p.h>
#include <QtQuickTemplates/private/qquickstackview_p.h>
#include <QtQuickTemplates/private/qquickswitch_p.h>
#include <QtQuickTemplates/private/qquicktabbar_p.h>
#include <QtQuickTemplates/private/qquicktabbutton_p.h>
#include <QtQuickTemplates/private/qquicktextarea_p.h>
#include <QtQuickTemplates/private/qquicktextfield_p.h>
#include <QtQuickTemplates/private/qquicktogglebutton_p.h>
#include <QtQuickTemplates/private/qquicktoolbar_p.h>
#include <QtQuickTemplates/private/qquicktoolbutton_p.h>

QT_BEGIN_NAMESPACE

class QtQuickTemplates2Plugin: public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface/1.0")

public:
    void registerTypes(const char *uri);
};

void QtQuickTemplates2Plugin::registerTypes(const char *uri)
{
    qmlRegisterType<QQuickApplicationWindow>(uri, 2, 0, "ApplicationWindow");
    qmlRegisterType<QQuickBusyIndicator>(uri, 2, 0, "BusyIndicator");
    qmlRegisterType<QQuickButton>(uri, 2, 0, "Button");
    qmlRegisterType<QQuickCheckBox>(uri, 2, 0, "CheckBox");
    qmlRegisterType<QQuickControl>(uri, 2, 0, "Control");
    qmlRegisterType<QQuickContainer>(uri, 2, 0, "Container");
    qmlRegisterType<QQuickFrame>(uri, 2, 0, "Frame");
    qmlRegisterType<QQuickGroupBox>(uri, 2, 0, "GroupBox");
    qmlRegisterType<QQuickLabel>(uri, 2, 0, "Label");
    qmlRegisterType<QQuickPageIndicator>(uri, 2, 0, "PageIndicator");
    qmlRegisterType<QQuickProgressBar>(uri, 2, 0, "ProgressBar");
    qmlRegisterType<QQuickRadioButton>(uri, 2, 0, "RadioButton");
    qmlRegisterType<QQuickScrollBar>(uri, 2, 0, "ScrollBar");
    qmlRegisterType<QQuickScrollIndicator>(uri, 2, 0, "ScrollIndicator");
    qmlRegisterType<QQuickSlider>(uri, 2, 0, "Slider");
    qmlRegisterType<QQuickStackView>(uri, 2, 0, "StackView");
    qmlRegisterType<QQuickSwitch>(uri, 2, 0, "Switch");
    qmlRegisterType<QQuickTabBar>(uri, 2, 0, "TabBar");
    qmlRegisterType<QQuickTabButton>(uri, 2, 0, "TabButton");
    qmlRegisterType<QQuickTextArea>(uri, 2, 0, "TextArea");
    qmlRegisterType<QQuickTextField>(uri, 2, 0, "TextField");
    qmlRegisterType<QQuickToggleButton>(uri, 2, 0, "ToggleButton");
    qmlRegisterType<QQuickToolBar>(uri, 2, 0, "ToolBar");
    qmlRegisterType<QQuickToolButton>(uri, 2, 0, "ToolButton");

    qmlRegisterRevision<QQuickText, 6>(uri, 2, 0);
    qmlRegisterRevision<QQuickTextInput, 6>(uri, 2, 0);
    qmlRegisterRevision<QQuickTextEdit, 6>(uri, 2, 0);
}

QT_END_NAMESPACE

#include "qtquicktemplates2plugin.moc"