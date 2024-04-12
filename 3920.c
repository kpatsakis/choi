void fun()
{
  int entity_4 = 84;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char* entity_2;
  char* entity_0;
  entity_2 = (char*)malloc(39*sizeof(char));
  entity_2[39-1]='';
  memset(entity_9, 'B', entity_4-1);
  entity_9[entity_4-1]='';
  entity_0 = (char*)malloc(61*sizeof(char));
  entity_0[61-1]='';
  entity_4 = 12;
  strcpy(entity_0, entity_9);
}