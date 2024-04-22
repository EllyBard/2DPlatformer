
//###############
//Public variables
//###############
static bool running = true;

//###############
//Public Functions
//###############
bool platform_create_window(int width, int height, char* title);

//##############
//Windows Platform ndows 
//##############

int main()
{
    while(running){
        //Update
        platform_create_window(1200, 720, "2DPlatformer");
  
    }
    return 0;
}