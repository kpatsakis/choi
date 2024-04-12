void fun()
{
  int entity_3 = 50;
  char* entity_5;
  char* entity_2;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char* entity_1;
  char entity_9[89] = "";
  entity_9 = NULL;
  memset(entity_9, 'g', 89-1);
  entity_9[89-1]='';
  entity_1 = (char*)malloc(46*sizeof(char));
  entity_1[46-1]='';
  entity_2 = (char*)malloc(4*sizeof(char));
  entity_2[4-1]='';
  entity_5 = (char*)malloc(35*sizeof(char));
  entity_5[35-1]='';
  memset(entity_0, 'k', entity_3-1);
  entity_0[entity_3-1]='';
  memcpy(entity_5, entity_0, entity_3*sizeof(char));
}