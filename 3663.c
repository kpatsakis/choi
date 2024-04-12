void fun()
{
  int entity_4 = 88;
  char* entity_5;
  char entity_3[61] = "";
  entity_3 = NULL;
  char* entity_0;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  memset(entity_3, 'P', 61-1);
  entity_3[61-1]='';
  entity_5 = (char*)malloc(80*sizeof(char));
  entity_5[80-1]='';
  memset(entity_9, 'm', entity_4-1);
  entity_9[entity_4-1]='';
  entity_0 = (char*)malloc(76*sizeof(char));
  entity_0[76-1]='';
  strcpy(entity_0, entity_9);
}