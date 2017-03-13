/****************************************************************************
**
** Copyright (C) 2017 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** BSD License Usage
** Alternatively, you may use this file under the terms of the BSD license
** as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

import QtQuick 2.7
import QtQuick.Layouts 1.3
import "../Style"
import "navigation.js" as NavigationData

Item {
    Item {
        anchors.centerIn: parent

        width: UIStyle.visibleDiameter
        height: UIStyle.visibleRectHeight

        Column {
            anchors.fill: parent
            spacing: 2

            Rectangle {
                id: titleRowCntr

                anchors.horizontalCenter: parent.horizontalCenter
                width: parent.width
                height: 64

                color: UIStyle.colorQtGray9

                Row {
                    spacing: 10
                    anchors.centerIn: parent

                    Image {
                        anchors.verticalCenter: parent.verticalCenter
                        height: 64
                        width: 64
                        source: "../../images/navigation/route.png"
                        fillMode: Image.PreserveAspectCrop
                    }
                    Text {
                        anchors.verticalCenter: parent.verticalCenter
                        text: qsTr("Walking")
                        font.pixelSize: UIStyle.fontSizeM
                        font.letterSpacing: 2
                        color: UIStyle.colorQtGray2
                    }
                }
            }

            ListModel {
                id: routeModel
            }

            ListView {
                id: routeView

                width: parent.width
                height: UIStyle.visibleRectHeight - titleRowCntr.height
                property var imageList: ["straight.png",
                                         "leftturn.png",
                                         "rightturn.png",
                                         "uturn.png",
                                         "start.png",
                                         "end.png"]

                clip: true
                focus: true
                boundsBehavior: Flickable.StopAtBounds
                snapMode: ListView.SnapToItem
                currentIndex: 0
                model: routeModel
                delegate: RouteElement {}
            }
        }
    }
    Component.onCompleted: {
        NavigationData.requestNavigationRoute(routeModel)
    }
}