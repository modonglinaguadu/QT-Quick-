import QtQuick 2.9
//import QtQuick.Window 2.2

//Window {
//    visible: true
//    width: 640
//    height: 480
//    title: qsTr("123")
//    Rectangle{
//        width:100
//        height:100
//        anchors.top:parent.top
//        anchors.left:parent.left
//        color:"red"
//    }
//}
Item{
    Rectangle{
        width:100
        height:100
        Text{
            width:parent.width
            height:parent.height
            text:"Hello World"
            color:"#f66"
            font.pixelSize: 12
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
        }
    }

}
