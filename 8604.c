void fun()
{
  int entity_2 = 38;
  char* entity_6;
  char* entity_9;
  char entity_4 = 'c';
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  memset(entity_3, 't', entity_2-1);
  entity_3[entity_2-1]='';
  entity_9 = (char*)malloc(46*sizeof(char));
  entity_9[46-1]='';
  entity_6 = (char*)malloc(43*sizeof(char));
  entity_6[43-1]='';
  strcpy(entity_9, entity_3);
}