enum subtype
{
    spinner , slider , hopper
};

class Icon
{
    public:
    static void move(subtype rxd_subtype);
}Icon_obj;


class spinner
{
    bool clockwise;
    bool expand;
    public:
    void spin()
    {
    }
}spinner_obj;

class slider
{
    bool vertical;
    int  distance;
    public:
    void slide()
    {
    }
}slider_obj;

class hopper
{
    bool visible;
    int xcoord,ycoord;
    public:
    void hop()
    {
    }

}hopper_obj;


void Icon_obj ::  move(subtype rxd_subtype)
{
 if( rxd_subtype == 1)
     spinner_obj.spin();
    
 else if(rxd_subtype == 2)
     slider_obj.slide();
 else
     hopper_obj.hop();
 
}

int main()
{
    subtype type = 1;
    Icon_obj.move( type);
}





/*Old piece of code*/
class Icon
{
    float speed, glow, energy;
    int x, y;
    int subtype; // spinner, slider or hopper
 
    bool clockwise; // need for spinner
    bool expand; // need for spinner
    bool vertical; // need for slider
 
    int distance; // need for slider
    bool visible; // need for hopper
 
    int xcoord, ycoord; // need for hopper
 
    void spin() { }
 
    void slide() { }
 
    void hop() { }
    // constructor must set subtype: client must pass value
    public Icon(unsigned value)
    {
        subtype = value; // use enum for readability
        // and then use conditional to set associated fields
    }
    public void move()
    {
        if (subtype == 1) { spin(); }
        else if (subtype == 2)
        {
            slide();
        }
        else
        {
            hop();
        }
    }
}
