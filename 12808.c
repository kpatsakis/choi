void fun()
{
  int entity_8 = 94;
  char* entity_9;
  char entity_5[entity_8] = "";
  entity_9 = (char*)malloc(75*sizeof(char));
  entity_9[0]='0';
  memset(entity_5, 'h', entity_8-1);
  entity_5[entity_8-1]='0';
  memcpy(entity_9, entity_5, entity_8*sizeof(char));
}