#ifndef GAME_MWWORLD_ACTIONTAKE_H
#define GAME_MWWORLD_ACTIONTAKE_H

#include "action.hpp"
#include "ptr.hpp"

namespace MWWorld
{
    class ActionTake : public Action
    {
            MWWorld::Ptr mObject;

            virtual void executeImp (const Ptr& actor);

        public:

            ActionTake (const MWWorld::Ptr& object);
    };
}

#endif
