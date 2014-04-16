/** \file
 *  Game Develop
 *  2008-2014 Florian Rival (Florian.Rival@gmail.com)
 */
#if !defined(EMSCRIPTEN)
#ifndef TEXT_H
#define TEXT_H
#include <SFML/Graphics.hpp>
#include <string>

using namespace std;

/**
 * \brief Old class for drawing objects.
 * \deprecated Do not use this anymore, but the TextObject extension instead.
 */
class GD_API Text
{
    public:
        /** Default constructor */
        Text();
        /** Default destructor */
        virtual ~Text();

        sf::Text text;
        string fontName;
        string layer;

        void Draw(sf::RenderWindow& main_window);

    protected:
    private:
};

#endif // TEXT_H
#endif