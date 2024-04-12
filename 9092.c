void fun()
{
  int entity_1 = 13;
  int entity_8 = 77;
  int entity_5 = 53;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char* entity_2;
  char* entity_0;
  entity_0 = (char*)malloc(39*sizeof(char));
  entity_0[39-1]='';
  entity_2 = (char*)malloc(70*sizeof(char));
  entity_2[70-1]='';
  memset(entity_9, 'x', entity_1-1);
  entity_9[entity_1-1]='';
  entity_1 = 17;
  strcpy(entity_2, entity_9);
}