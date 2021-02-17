#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

using namespace sf;
int main() {
    // RenderWindow 声明窗体
    RenderWindow window(
            VideoMode(640, 400),
            "Hello World!",
            Style::Default
    );
    window.setFramerateLimit(60);

    // isOpen 检查窗体是否打开
    while (window.isOpen()) {

        // 进行事件轮询
        // Event 定义系统事件及其参数
        Event event{};
        // pollEvent 等待事件并返回
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                // close 关闭窗体并销毁所有附加资源
                window.close();
            if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
                window.close();
        }

        // clear 用单一颜色清除整个目标
        window.clear();

        // display 在屏幕上显示到目前为止已渲染到窗口的内容
        window.display();
    }
    return 0;
}
