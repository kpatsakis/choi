void fun()
{
  int entity_5 = 2;
  char* entity_6;
  char entity_0[30] = "";
  entity_0 = NULL;
  char entity_9[89] = "";
  entity_9 = NULL;
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  memset(entity_9, 'E', 89-1);
  entity_9[89-1]='';
  memset(entity_0, 'q', 30-1);
  entity_0[30-1]='';
  memcpy(entity_6, entity_9, 89*sizeof(char));
}