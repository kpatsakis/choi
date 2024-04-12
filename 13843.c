void fun()
{
  int entity_4 = 51;
  entity_4 = 52;
  char* entity_9;
  char entity_6[entity_4] = "";
  memset(entity_6, 'J', entity_4-1);
  entity_6[entity_4-1]='0';
  entity_9 = (char*)malloc(18*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_6, entity_4*sizeof(char));
}