Mardi 19 octobre : On doit parser la chaine "@import <include>" pour recuperer l'in		      clude et l'inclure correctement dans le fichier en .c
      	 	  On demarre avec un fichier .kc que l'on parse avec readCString.
		  On stocke toute les occurences dans un arbre (stocker au format x		     ml pour verifier si les donnees sont exactes). On doit parser
		  l'arbre pour verifier si l'include n'est pas deja dans l'abre, ce		     ci permet de gerer la double inclusion.
		  On fais un foreach dans le script et on applique cnorm2c dans not		     re fichier de sortie. 
