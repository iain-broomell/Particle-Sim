#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>


class RenderPixel{
    public:
    sf::Vector2i position;
    sf::Color pixel_color;
    RenderPixel(sf::Vector2i pos, sf::Color col){
        position = pos;
        pixel_color = col;
    }

};
static void screen_update(sf::RenderWindow &window, std::vector<RenderPixel> &render_pixels){
    
    for (auto &p : render_pixels) {
        sf::RectangleShape this_pixel = sf::RectangleShape(sf::Vector2f(1,1));
        this_pixel.setPosition(p.position.x, p.position.y);
        this_pixel.setFillColor(p.pixel_color);
        window.draw(this_pixel);

    }
}