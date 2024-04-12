void fun()
{
  int entity_5 = 2;
  char* entity_0;
  char entity_9[entity_5] = "";
  memset(entity_9, 'X', entity_5-1);
  entity_9[entity_5-1]='0';
  entity_0 = (char*)malloc(20*sizeof(char));
  entity_0[0]='0';
  entity_5 = 49;
  memcpy(entity_0, entity_9, entity_5*sizeof(char));
}