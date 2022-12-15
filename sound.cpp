
#define freq 900
#define slp 100
#define sho 100
#define lon 300
sound::sound()
{
    //ctor
}

sound::~sound()
{
    //dtor
}


bool sound::test_sound()
{
    //Beep(440,500); //  Beep ( Frequency [Hz], Duration [ms] ) from windows.h
    s_sound();
    Sleep(300);
    o_sound();
    Sleep(300);
    s_sound();
    return true;
}

bool sound::wait_dot()
{
    Sleep(slp);
    return true;
}

bool sound::dot_sound()
{
    Beep(freq,sho);
    return true;
}

bool sound::dash_sound()
{
    Beep(freq,lon);
    return true;
}

bool sound::space_sound()
{
    Sleep(700);
    return true;
}


bool sound::get_sound_char(char symbol)
{
    if(symbol == ' ')
    space_sound();
    else if(symbol == 'a')
        a_sound();
    else if(symbol == 'b' )
        b_sound();
        else if(symbol == 'c')
        c_sound();
        else if(symbol == 'd' )
        d_sound();
        else if(symbol == 'e' )
        e_sound();
        else if(symbol == 'f')
        f_sound();
        else if(symbol == 'g')
        g_sound();
        else if(symbol == 'h')
        h_sound();
        else if(symbol == 'i')
        i_sound();
        else if(symbol == 'j')
        j_sound();
        else if(symbol == 'k')
        k_sound();
        else if(symbol == 'l')
        l_sound();
        else if(symbol == 'm')
        m_sound();
        else if(symbol == 'n')
        n_sound();
        else if(symbol == 'o')
        o_sound();
        else if(symbol == 'p')
        p_sound();
        else if(symbol == 'q')
        q_sound();
        else if(symbol == 'r')
        r_sound();
        else if(symbol == 's')
        s_sound();
        else if(symbol == 't')
        t_sound();
        else if(symbol == 'u')
        u_sound();
        else if(symbol == 'v')
        v_sound();
        else if(symbol == 'w')
        w_sound();
        else if(symbol == 'x')
        x_sound();
        else if(symbol == 'y')
        y_sound();
        else if(symbol == 'z')
        z_sound();
        else if(symbol == '1')
        one_sound();
        else if(symbol == '2')
        two_sound();
        else if(symbol == '3')
        three_sound();
        else if(symbol == '4')
        four_sound();
        else if(symbol == '5')
        five_sound();
        else if(symbol == '6')
        six_sound();
        else if(symbol == '7')
        seven_sound();
        else if(symbol == '8')
        eight_sound();
        else if(symbol == '9')
        nine_sound();
        else if(symbol == '0')
        zero_sound();
        //else if(symbol == '.')
        //dot_sound();
        //else if(symbol == ',')
        //coma_sound();
        //else if(symbol == '?')
        //qmark_sound();
        //else if (symbol == '-')
           //dash_char_sound();
        else
        {
            std::cout << "Error 13" << std::endl; // Error 10 << Occurs when there is no such symbol in dictionary
            std::cout << "PROBLEM WITH>" << symbol << "<" << std::endl;
        }
}











bool sound::a_sound()
{
    dot_sound();
    Sleep(slp);
    dash_sound();
    return true;
}

bool sound::b_sound()
{
    dash_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dot_sound();
    return true;
}

bool sound::c_sound()
{
    dash_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dot_sound();
    return true;
}

bool sound::d_sound()
{
    dash_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dot_sound();
    return true;
}

bool sound::e_sound()
{
    dot_sound();
    return true;
}

bool sound::f_sound()
{
    dot_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dot_sound();
return true;
}

bool sound::g_sound()
{
    dash_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dot_sound();
    return true;
}

bool sound::h_sound()
{
    dot_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dot_sound();
    return true;
}

bool sound::i_sound()
{
    dot_sound();
    Sleep(slp);
    dot_sound();
    return true;
}

bool sound::j_sound()
{
    dot_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dash_sound();
    return true;
}

bool sound::k_sound()
{
    dash_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dash_sound();
    return true;
}

bool sound::l_sound()
{
    dot_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dot_sound();
    return true;
}

bool sound::m_sound()
{
    dash_sound();
    Sleep(slp);
    dash_sound();
    return true;
}

bool sound::n_sound()
{
    dash_sound();
    Sleep(slp);
    dot_sound();
    return true;
}

bool sound::o_sound()
{
    dash_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dash_sound();
    return true;
}

bool sound::p_sound()
{
    dot_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dot_sound();
    return true;
}

bool sound::q_sound()
{
    dash_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dash_sound();
    return true;
}

bool sound::r_sound()
{
    dot_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dot_sound();
    return true;
}

bool sound::s_sound()
{
    dot_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dot_sound();

    return true;
}

bool sound::t_sound()
{
    dash_sound();
    return true;
}

bool sound::u_sound()
{
    dot_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dash_sound();
    return true;
}

bool sound::v_sound()
{
    dot_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dash_sound();
    return true;
}

bool sound::w_sound()
{
    dot_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dash_sound();
    return true;
}

bool sound::x_sound()
{
    dash_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dash_sound();
    return true;
}

bool sound::y_sound()
{
    dash_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dash_sound();
    return true;
}

bool sound::z_sound()
{
    dash_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dot_sound();
    return true;
}

bool sound::one_sound()
{
    dot_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dash_sound();
    return true;
}

bool sound::two_sound()
{
    dot_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dash_sound();
    return true;
}

bool sound::three_sound()
{
    dot_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dash_sound();
    return true;
}

bool sound::four_sound()
{
   dot_sound();
   Sleep(slp);
   dot_sound();
   Sleep(slp);
   dot_sound();
   Sleep(slp);
   dot_sound();
   Sleep(slp);
   dash_sound();
   return true;
}

bool sound::five_sound()
{
    dot_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dot_sound();
    return true;
}

bool sound::six_sound()
{
    dash_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dot_sound();
    return true;
}

bool sound::seven_sound()
{
    dash_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dot_sound();
    return true;
}

bool sound::eight_sound()
{
    dash_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dot_sound();
    Sleep(slp);
    dot_sound();
return true;
}

bool sound::nine_sound()
{
    dash_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
  dot_sound();
  return true;

}

bool sound::zero_sound()
{
    dash_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dash_sound();
    Sleep(slp);
    dash_sound();
    return true;
}




