/*BEGIN PS3 Controller Styling*/
/*This class defines the base attributes of the skin*/
.controller.custom{
    /* The background image is basically the base for the controller's skin. The 
    PS3 controller's skin can be found at http://mrmcpowned.com/gamepad/ps3-assets/base.png
    and you can observe it as an example. The sticks, buttons, and directional arrows are missing
    because their appropriate elements will be incorperated when their styling is defined below.
    The entirity of the skin's visual styling is done via background images and CSS sprites. */ 
    background: url(https://images.app.goo.gl/54eSwKxV1qiWxbFi7); 
    height: 558px;
    width: 784px;
}
.custom.disconnected { /* This class shows an image when the controller is disconnected */
    background: url(ps3-assets/base-disconnect.png);
}
/* This hides the controller's button when disconnected so only the background image remains */ 
.custom.disconnected div {
    display: none;
}
.custom .triggers{ /* The triggers are housed inside a div, so this sizes the div properly and positions it */
    width: 586px;
    height: 65px;
    position: absolute;
    left: 99px;
}
.custom .trigger{/* These are the actual triggers themselves */
    width:86px;
    height:65px;
    background: url(ps3-assets/triggers.png);
    opacity: 0;
}
/* The left and right classes below are used to position the triggers
within the div they're contained in. Since their positions is realtive
to the size of the parent element, we simply resize the parent element 
above to achieve the desired position. */
.custom .trigger.left{ 
    float: left;
}
.custom .trigger.right{
    float: right;
}

/* The bumpers follow the same methodology as the triggers in terms of
placement */
.custom .bumper{
    width: 89px;
    height: 28px;
    background: url(ps3-assets/bumpers.png);
    opacity: 0;
}
.custom .bumpers{
    position: absolute;
    width: 586px;
    height: 28px;
    left: 99px;
    top: 72px;
}
.custom .bumper.pressed{ /* The '.pressed' class is used for most buttons to signify they've been pressed */
    opacity: 1;
}
.custom .bumper.left{
  /* Call me lazy or smart, but why should I make 2 bumpers when they're symmetrical
  and I can just rotate them in the browser? Also, note that you most likely won't need
  to use a browser speficic prefix unless it's something that is indeed browser specific.
  NOTE: CLR Browser is basically chrome, so you use '-webkit-' as the browser prefix. */
    -webkit-transform: rotateY(180deg);
    transform: rotateY(180deg);
    float: left;
}
.custom .bumper.right{
    float: right;
}
/* This bit of code is for the player indicator, which is represented in
quandrants on the xbox controller. That's note what it's called on the
PS3 controller but it'd be pointless for me to change the HTML for 
something as pedantic as a name. */
.custom .quadrant{
    position: absolute;
    background: url(ps3-assets/player-n.png);
    height: 17px;
    width: 111px;
    top: 140px;
    left: 240px;
}
/* Since the player indicator is just a CSS sprite, we change the 
position of the background to match the player number.
NOTE: Player orderin starts at 0, so p0 = Player 1 */
.custom .p0{
    background-position: 0 -6px;
}
.custom .p1{
    background-position: 0 -28px;
}
.custom .p2{
    background-position: 0 -49px;
}
.custom .p3{
    background-position: 0 -70px;
}
/* This is to size and position the containing div for the 
start and select buttons. */
.custom .arrows{
    position: absolute;
    width: 205px;
    height: 19px;
    top: 250px;
    left: 291px;
}
/* Setting the size and CSS sprite for the start adn select buttons */
.custom .back, .custom .start{
    background: url(ps3-assets/menus.png);
    width: 34px;
    height: 19px;
}
.custom .back.pressed, .custom .start.pressed{
    background-position-y: -21px;
    margin-top: 2px;
}
.custom .back{
    float: left;
    width: 38px;
}
.custom .start{
    float: right;
    width: 36px;
    background-position: 37px 0;
}
/* Positioning and size of the container for the face buttons */
.custom .abxy{
    position: absolute;
    width: 204px;
    height: 205px;
    top: 156px;
    left: 538px;
}
/* base class used to simplify the sprite mapping */
.custom .button{
    position: absolute;
    width:62px;
    height:62px;
    background: url(ps3-assets/face-buttons.png);
}
.custom .button.pressed{
    background-position-y: -64px;
    margin-top: 5px;
}
.custom .a{
    background-position: 62px 0;
    top: 142px;
    left: 71px;
}
.custom .b{
    background-position: 125px 0;
    top: 71px;
    right: 0px;
}
.custom .x{
    background-position: 0 0;
    top: 71px;
}
.custom .y{
    background-position: -63px 0;
    left: 71px;
}
/* Analog sticks follow the same principles as the triggers in terms of positioning
Note that the rotation of the sticks in hard coded with javascript, so it applies 
the CSS inline. */
.custom .sticks{
    position: absolute;
    width: 364px;
    height: 105px;
    top: 328px;
    left: 210px;
}
.custom .stick{
    position: absolute;
    background: url(ps3-assets/thumbs.png);
    height:105px;
    width: 105px;
}
.custom .stick.pressed.left{
    background-position-x: -106px;
}
.custom .stick.pressed.right{
    background-position-x: -211px;
}
.custom .stick.left{
    top: 0;
    left: 0;
}
.custom .stick.right{
    top: calc(100% - 105px);
    left: calc(100% - 105px);
}
/* Dpad possitioning and sizing */
.custom .dpad{
    position: absolute;
    width: 140px;
    height: 132px;
    top: 192px;
    left: 74px;
}
.custom .face{
    background: url(ps3-assets/dpad.png);
    position: absolute;
}
.custom .face.up, .custom .face.down{
    width: 38px;
    height: 52px;
}
.custom .face.left, .custom .face.right{
    width: 52px;
    height: 38px;
}
.custom .face.up{
    left: 50px;
    top: 0;
    background-position: 92px 0px;
}
.custom .face.down{
    left: 50px;
    top: 79px;
    background-position: 131px 0;
}
.custom .face.left{
    top: 47px;
    left: 0;
    background-position: 0px 0;
}
.custom .face.right{
    top: 47px;
    right: 0px;
    background-position: 53px 0;
}
.custom .face.pressed{
    margin-top: 5px;
    background-position-y: 52px;
}
