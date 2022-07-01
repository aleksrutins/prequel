import scala.swing.*
class MainWindow extends Frame {
    title = "No Project | Prequel"

    contents = new FlowPanel {
    contents += new Label("Launch rainbows:")
    contents += new Button("Click me") {
      reactions += {
        case event.ButtonClicked(_) =>
          println("All the colours!")
        }
        }
    }
    
    pack()
    centerOnScreen()
    open()
}