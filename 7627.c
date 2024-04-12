void fun()
{
  int entity_8 = 24;
  int entity_6 = 42;
  char* entity_0;
  char* entity_2;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char entity_5[72] = "";
  entity_5 = NULL;
  entity_2 = (char*)malloc(91*sizeof(char));
  entity_2[91-1]='';
  memset(entity_9, 't', entity_8-1);
  entity_9[entity_8-1]='';
  entity_0 = (char*)malloc(60*sizeof(char));
  entity_0[60-1]='';
  memset(entity_5, 'O', 72-1);
  entity_5[72-1]='';
  strcpy(entity_2, entity_9);
}