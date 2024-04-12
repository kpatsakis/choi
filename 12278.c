void fun()
{
  int entity_4 = 1;
  char* entity_8;
  char entity_9[entity_4] = "";
  memset(entity_9, 'U', entity_4-1);
  entity_9[entity_4-1]='0';
  entity_8 = (char*)malloc(59*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_9, entity_4*sizeof(char));
}