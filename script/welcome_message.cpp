#include <gazebo/gazebo.hh>

namespace gazebo
{
   class WelcomeMessageWorldPlugin : public WorldPlugin
   {
      public: WelcomeMessageWorldPlugin() : WorldPlugin()
      {
         printf("Welcome to Vin’s World!\n");
      }
      public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
      {
      }
   };
   GZ_REGISTER_WORLD_PLUGIN(WelcomeMessageWorldPlugin)
}
