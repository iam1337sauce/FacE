
cin >> expression // this is the initial input of the expression 
    if(expression = expressionTable.happy){
        //Do something
        std::cout<<"I'm feeling happy about career life.  I'm feeling happy about family life. I'm feeling happy about my personal relationships. "<<std::endl;
        //These will each be output in to the GUI
        //Then based on mouth movements, the user will select options 1 2 or 3 and will continue on to the next menu - we can add in an "is this correct" loop as well to have the user be able to fix errors
        cin >> mouth //I left it with cin because I am not sure how we will be retrieving data from the mouth
        if(mouth = mouthTable.top){ //  Happy - Career Branch
            std::cout<<"You have selected 'I'm feeling happy about career life.' Please choose from the options below: I am happy with my current occupation.  I am happy about my new job.  I am happy about my future career."<<std::endl;
            // **** Insert a delay here before it takes the mouth movement?
            cin >> mouth
            if (mouth = mouthTable.top){
                    std::cout<<"You have selected 'I am happy with my current occupation.'  Please choose from the options below: My career is my main purpose in life.  My career takes up a lot of my time but I love it.  I maintain a balance between my career and my social life which keeps me happy."<<std::endl;
                    // delay??
                cin >> mouth 
                    if (mouth = mouthTable.top) {
                       std::cout<<"You have selected 'My career is my main purpose in life.' \nYou are feeling happy about your career life and you are happy with your current occupation as it is your main purpose in life. \n Thank you for participating!"<<std::endl;
                     }
                    else if (mouth = mouthTable.middle) {
                        std::cout<<"You have selected 'My career takes up a lot of time but I love it.' \nYou are feeling happy about your career life and you are happy with your current occupation. It takes up a lot of your time but you love it. \n Thank you for participating!"<<std::endl;
                    } 
                    else if (mouth = mouthTable.bottom) {
                        std::cout<<"You have selected 'I maintain a balance between my career and my social life which keeps me happy.' \nYou are feeling happy about your career life and you are happy with your current occupation. You are able to maintain a balance between your career and social life which keeps you happy. \n Thank you for participating!"<<std::endl;
                    }
                    else {
                        std::cout<<"Please make an indication with your mouth as to what thought is most appropriate."<<std::endl;
                        }
              }
              
            else if (mouth = mouthTable.middle) {
                    std::cout<<"You have selected 'I am happy about my new job.' Please choose from the options below: I work close to home. I work with my friends. I work in a good environment. " <<std::endl;
            //delay???
                cin >> mouth
                    if (mouth = mouthTable.top) {
                       std::cout<<"You have selected 'I work close to home.' \nYou are feeling happy about your career life and you are happy about your new job as you now work close to home. \n Thank you for participating!"<<std::endl;
                     }
                    else if (mouth = mouthTable.middle) {
                        std::cout<<"You have selected 'I work with my friends.' \nYou are feeling happy about your career life and you are happy about your new job as you work with your friends. \n Thank you for participating!"<<std::endl;
                    } 
                    else if (mouth = mouthTable.bottom) {
                        std::cout<<"You have selected 'I work in a good environment.' \nYou are feeling happy about your career life and and you are happy about your new job as you work in a good environment. \n Thank you for participating!"<<std::endl;
                    }
                    else {
            std::cout<<"Please make an indication with your mouth as to what thought is most appropriate."<<std::endl;
                    }   
            } 
