void fun()
{
  int entity_9 = 49;
  int entity_5 = 63;
  char entity_6 = 'a';
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(9*sizeof(char));
  entity_0[9-1]='';
  memset(entity_7, 'f', entity_5-1);
  entity_7[entity_5-1]='';
  strcpy(entity_0, entity_7);
}