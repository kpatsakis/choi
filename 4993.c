void fun()
{
  int entity_6 = 52;
  int entity_9 = 19;
  entity_9 = 49;
  char entity_7 = 'Z';
  char entity_4[33] = "";
  entity_4 = NULL;
  char* entity_0;
  memset(entity_4, 'W', 33-1);
  entity_4[33-1]='';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  memcpy(entity_0, entity_4, 33*sizeof(char));
}