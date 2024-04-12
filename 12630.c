void fun()
{
  int entity_5 = 64;
  char entity_0[30] = "";
  char* entity_8;
  char entity_9[entity_5] = "";
  memset(entity_0, 'G', 30-1);
  entity_0[30-1]='0';
  memset(entity_9, 'z', entity_5-1);
  entity_9[entity_5-1]='0';
  entity_8 = (char*)malloc(7*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_9);
}