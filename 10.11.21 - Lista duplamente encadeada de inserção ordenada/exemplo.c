//void sortedInsert(struct Node** head_ref, struct Node* newNode)
Lista* insere_ordenado (Lista* l, int v)
{
    struct Lista* p;
 
    if (l == NULL)
    {
        l = v;
 	}
    else if (l->info >= v->info)
	{
        v->prox = l;
        v->prox->ant = v;
        l = v;
    }
 
    else 
	{
        p = l;
 
        while (p->prox != NULL && p->prox->info < v->info)
		{
            p = p->prox;
		}
        v->prox = p->prox;
 
        if (p->prox != NULL)
        {
            v->prox->ant = v;
 		}
        p->prox = v;
        v->ant = p;
    }
}

/*********************************************************************/


Lista* insere_ordenado (Lista* l, int v)
{
	//auxiliar
	Lista* aux = (Lista*) malloc(sizeof(Lista));
		
	l->info = v;
    aux->prox = NULL;
    aux->ant = NULL;
    
    //se a lista for nula
	if(l==NULL)
	{
		l = aux;
		return l;
	}
	//se nao for nula
	else
	{
		Lista* ult = l;
		int flag = 0;
		
		if(ult->prox==NULL)
		{
			// se o novo numero for maior que o ultimo....
			if(aux->info	>	ult->info)
			{
				ult->prox = aux;
				aux -> ant = ult;
				l = ult;
			}
			else
			{
				aux->prox = ult;
				ult->ant = aux;
				l = aux;
			}
		}
		else
		{
			//se o novo numero for menor que o ultimo OU igual ao ultimo....
			if(aux->info < ult->info || aux->info == ult->info)
			{
                aux->prox = ult;
                ult->ant = aux;
                l = aux;
            }
			else
			{
                while(ult->prox!=NULL)
				{
                    if(aux->info > ult->info && aux->info < ult->prox->info)
					{
                        flag=1;
                        aux->ant = ult;
                        aux->prox = ult->prox;
                        ult->prox->ant = aux;
                        ult->prox = aux;
                    }
					else
					{
						if(aux->info	==	ult->info)
						{
                            flag=1;
                            aux->prox = ult->prox;
                            aux->ant = ult;

                            ult->prox->ant = aux;
                            ult->prox = aux;

                        }
					}
					ult = ult->prox;	
				}
				if(flag==0)
				{
	            	ult->prox = aux;
	                aux->ant = ult;
	        	}
	    	}
		}
	}
}

/************************************************************/
Lista* insere_ordenado (Lista* l, int v)
{
   
    Lista*aux = Lista(v);
    if (!l)
    {
        l = aux;
        return l;
    }
    else if (v < (l->v))
    {
        aux->prox = l; 
        head->ant = aux;
        aux->ant = NULL;
        l = aux;
        return l; 
    }
    else 
    {
        Lista* temp = l;
        while ( ((temp->prox) != NULL) && ((temp->prox->v) <= v))
            temp = temp->prox;
        
        if (temp->prox != NULL)
        {
            Lista* prox = temp->prox;
            prox->ant = aux;
            aux->prox = prox;
        }
        else 
            aux->prox = NULL;
            
        temp->prox = aux;
        aux->ant = temp;
    }
    return l; 
}

/***************************************************************/
Lista* auxiliar(int v)
{
    Lista* aux = (Lista*)malloc(sizeof(Lista));
    aux->v = v;
    aux->ant = aux->prox = NULL;
    return aux;
}
Lista* insere_ordenado (Lista* l, Lista* aux)
{
    Lista* p;
    
    if (l == NULL)
	{
        l = aux;
    }
    
    else if (l->v >= aux->v)
	{
        aux->prox = l;
        aux->prox->ant = aux;
        l = aux;
    }
    
    else {
        info = l;
        while (info->prox != NULL && info->prox->v < aux->v)
		{
			info = info->prox;
        }
        
        aux->prox = info->prox;
        
        if (info->next != NULL)
		{
            aux->prox->ant = aux;
        }
       
       info->prox = aux;
       aux->ant = info;
    }
}

/****************************************************************/

Lista* insere_ordenado(Lista* l, int v) 
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	Lista *q = l;
	p->info= v;
	
	if(q->info > v)
	{
	    q->ant = p;
	    p->prox = q;
	    p->ant = NULL;
	    l = p;
	    return l;
	}
	while(q!=NULL)
	{
	    if (q->info >= v)
	    {
	        p->prox = q;
	        p->ant = q->ant;
	        q->ant->prox = p;
	        return l;
	    }
	    else if (q->prox==NULL)
	    {
	        q->prox = p;
	        p->ant = q;
	        p->prox = NULL;
	        return l;
	    }
	    q = q->prox;
	}
	return l;
}
                    
/*******************************************************************/


Lista* insere_ordenado(Lista* l, int v) 
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	Lista *q = l;
	p->info= v;
	
	if(q->info > v)
	{
	    q->ant = p;
	    p->prox = q;
	    p->ant = NULL;
	    l = p;
	    return l;
	}
	while(q!=NULL)
	{
	    if (q->info >= v)
	    {
	        p->prox = q;
	        p->ant = q->ant;
	        q->ant->prox = p;
	        return l;
	    }
	    else if (q->prox==NULL)
	    {
	        q->prox = p;
	        p->ant = q;
	        p->prox = NULL;
	        return l;
	    }
	    q = q->prox;
	}
	return l;
}
 
 
 /*************************************************************************/
 
 Lista* insere_ordenado(Lista* l, int v) 
{
	Lista* p; //pecorrer
	
  	Lista* novo = (Lista*) malloc(sizeof(Lista));
 	novo->info = v;
 	
    // if list is empty 
    if (l == NULL) 
        l = novo; 
  
    else if (l->info >= novo->info)
	{ 
        novo->prox = *head_ref; 
        novo->prox->ant = novo; 
        l = v; 
    } 
  
    else { 
        current = *head_ref; 
  
        // locate the node after which the new node 
        // is to be inserted 
        while (current->next != NULL &&  
               current->next->data < newNode->data) 
            current = current->next; 
  
        /* Make the appropriate links */
        newNode->next = current->next; 
  
        // if the new node is not inserted 
        // at the end of the list 
        if (current->next != NULL) 
            newNode->next->prev = newNode; 
  
        current->next = newNode; 
        newNode->prev = current; 
    } 
}

/*******************************************/

	Lista* novo = cria(v); /* cria novo nó */
 	Lista* ant = NULL; /* ponteiro para elemento anterior */
 	Lista* p = l; /* ponteiro para percorrer a lista*/
	
	/* procura posição de inserção */
	while (p != NULL && p->info < v)
	{
		ant = p;
		p = p->prox;
	}
	
	/* insere elemento */
	if (ant == NULL)
	{
		/* insere elemento no início */
		novo->prox = l;
		l = novo;
	}
	else
	{
		/* insere elemento no meio da lista */
		novo->prox = ant->prox;
		ant->prox = novo;
	}
	return l;
	
	
	
	
	
	
/******************************************************/
Lista* insere_ordenado(Lista* l, int v) 
{
	Lista* novo = cria(v); /* cria novo nó */
 	Lista* ant = NULL; /* ponteiro para elemento anterior */
 	
	Lista* p = l; /* ponteiro para percorrer a lista*/
	
	if(l->info)
	{
		novo->prox = novo;
		novo->ant = novo;
	}
	else
	{
		novo = l->
	}	
}


/*****************************************************************/


Lista* insere_ordenado(Lista* l) 
{
    Lista *novo =(Lista*) malloc(sizeof(Lista));

    printf("Digite o numero a ser inserido no inicio da lista: ");
    scanf("%d",&novo->num);
    
    if(l->inicio == NULL)
	{
        l->inicio = novo; 
        l->fim = novo;
        

        novo->prox = NULL;
        novo->ant = NULL;
    }
	else
	{
        novo->prox =  l->inicio;
        
        l->inicio->ant = novo;
        
        novo->ant = NULL;
        
        l->inicio = novo;  
    }
	
}
	
