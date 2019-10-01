/*
[5 points] void capitalize(char *s)
Changes s so that the first letter of every word is in upper case and each additional letter is in lower case.
*/

void capitalize(char *s) {
    int i;
    for(i=0; s[i] != '\0'; i++) {
  		if(i == 0) {
  			if((s[i] >= 'a' && s[i] <= 'z'))
  			    s[i] = s[i]-32;
  		continue;
	    }
  		if(s[i] == ' ') {
            ++i;
            if(s[i] >= 'a' && s[i] <= 'z') {
  				s[i] = s[i]-32;
  			    continue;
  		    }
  	    } else {
		    if(s[i] >= 'A' && s[i] <= 'Z')
  				s[i] = s[i]+32;
  		}
  	}
    printf("%s\n", s);
}
