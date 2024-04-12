void fun()
{
  int entity_9 = 86;
  char entity_5[entity_9] = "";
  char* entity_4;
  memset(entity_5, 'P', entity_9-1);
  entity_5[entity_9-1]='0';
  entity_4 = (char*)malloc(54*sizeof(char));
  entity_4[0]='0';
  entity_9 = 56;
  memcpy(entity_4, entity_5, entity_9*sizeof(char));
}