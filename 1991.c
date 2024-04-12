void fun()
{
  int entity_5 = 96;
  char* entity_0;
  char* entity_3;
  char entity_9[41] = "";
  entity_9 = NULL;
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[entity_5-1]='';
  memset(entity_9, 'y', 41-1);
  entity_9[41-1]='';
  entity_0 = (char*)malloc(78*sizeof(char));
  entity_0[78-1]='';
  strcpy(entity_3, entity_9);
}