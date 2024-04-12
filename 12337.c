void fun()
{
  int entity_9 = 1;
  char entity_5[entity_9] = "";
  char* entity_8;
  entity_8 = (char*)malloc(24*sizeof(char));
  entity_8[0]='0';
  memset(entity_5, 'J', entity_9-1);
  entity_5[entity_9-1]='0';
  memcpy(entity_8, entity_5, entity_9*sizeof(char));
}