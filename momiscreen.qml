// SPDX-License-Identifier: GPL-3.0+
// Copyright (C) 2021 AISIN CORPORATION
import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 1.5
import QtQuick.Controls.Styles 1.4
import AppExec 1.0


ApplicationWindow {
    id: momiScreen
    visible: true
    width: 1920
    height: 93
    flags: Qt.FramelessWindowHint
    title: qsTr("momiscreen")
	color: "transparent"

    AppExec {
		id: exec
	}

    Image {
        id: homeScreen_footer_image
        y: 70
        width: 1920
        height: 93
        anchors.left: parent.left
        anchors.leftMargin: 0
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 0
        opacity: 1
        source: "images/12_Footer.png"

        Item {
            id: homeScreenMap
            x:450
            y: 0
            width: parent.height
            height: width
            anchors.verticalCenter: parent.verticalCenter
            anchors.bottomMargin: 5

            Button {
                id: map_sw
                x: 0
                y: 0
                width: parent.height
                height: width
                opacity: 0

                function homescreen_map_sw() {
					exec.runMominavi()
                }
                onClicked: { homescreen_map_sw() }
            }

            Image {
                id: map_sw_image
                x: 4
                y: 4
                width: 62
                height: 54
                anchors.bottomMargin: 10
                anchors.bottom: parent.bottom
                opacity: 1
                source: "images/15_Maps.png"
            }

        }

        Item {
            id: homeScreenMedia
            x: 800
            y: 0
            width: parent.height
            height: width
            anchors.bottomMargin: 5
            anchors.verticalCenterOffset: 0
            anchors.verticalCenter: parent.verticalCenter

            Button {
                id: media_sw
                x: 0
                y: 0
                width: parent.height
                height: width
                opacity: 0
                visible: true
                function homescreen_media_sw() {
					exec.runMomiplay()
                }
                onClicked: { homescreen_media_sw() }
            }

            Image {
                id: media_image
                x: 4
                y: 4
                width: 46
                height: 51
                anchors.bottom: parent.bottom
                anchors.bottomMargin: 10
                opacity: 1
                source: "images/16_Multimedia.png"
            }
        }

        Item {
            id: homeScreenDashBoard
            x: 1150
            y: 0
            width: parent.height
            height: width
            anchors.bottomMargin: 5
            anchors.verticalCenter: parent.verticalCenter

            Button {
                id: dashBoard_sw
                x: 0
                y: 0
                width: parent.height
                height: width
                opacity: 0
                visible: true

                function homescreen_dash_sw() {
					//exec.runMomiradio()
                }
                onClicked: { homescreen_dash_sw() }
            }

            Image {
                id: dashBoard_image
                x: 4
                y: 4
                width: 74
                height: 37
                anchors.bottom: parent.bottom
                anchors.bottomMargin: 16
                opacity: 1
                source: "images/17_Dashboard.png"
            }
        }

        Item {
            id: homeScreenSetting
            x: 1500
            y: 0
            width: parent.height
            height: width
            anchors.bottomMargin: 5
            anchors.verticalCenter: parent.verticalCenter

            Button {
                id: setting_sw
                x: 0
                y: 0
                width: parent.height
                height: width
                opacity: 0
                visible: true
                function homescreen_setting_sw() {
					exec.runMomisetting()
                }
                onClicked: { homescreen_setting_sw() }
            }

            Image {
                id: setting_image
                x: 4
                y: 4
                width: 56
                height: 55
                anchors.bottom: parent.bottom
                anchors.bottomMargin: 10
                opacity: 1
                source: "images/18_Setting.png"
            }
        }

	    Item {
            x: 38
            y: 0
            width: 200
            height: parent.height
	
	        DateBox {
	            id: timedate
	            width: 200
	            height: 50
	            pixSize: 40
	        }
	    }

        Image {
            id: logo
            x: 1769
            y: -28
            width: 150
            height: width
            fillMode: Image.PreserveAspectFit
            source: "images/14_Logo.png"
        }

    }
}
