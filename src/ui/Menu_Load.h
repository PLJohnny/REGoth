#pragma once
#include "Menu.h"

namespace UI
{
    class Menu_Load : public Menu
    {
    public:
        Menu_Load(Engine::BaseEngine& e);
        ~Menu_Load();
    
        /**
         * Creates an instance of this class and appends it to the root UI-View
         * @return Instance of the class. Don't forget to delete!
         */
        static Menu_Load* create(Engine::BaseEngine& e);
       
    private:
    };
}
