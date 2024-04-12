void fun()
{
  int entity_5 = 37;
  char* entity_1;
  char entity_9[entity_5] = "";
  memset(entity_9, 'x', entity_5-1);
  entity_9[entity_5-1]='0';
  entity_1 = (char*)malloc(26*sizeof(char));
  entity_1[0]='0';
  entity_5 = 11;
  memcpy(entity_1, entity_9, entity_5*sizeof(char));
}