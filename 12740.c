void fun()
{
  int entity_0 = 93;
  char entity_8[5] = "";
  char entity_4[entity_0] = "";
  char* entity_9;
  memset(entity_8, 'g', 5-1);
  entity_8[5-1]='0';
  entity_9 = (char*)malloc(23*sizeof(char));
  entity_9[0]='0';
  memset(entity_4, 'q', entity_0-1);
  entity_4[entity_0-1]='0';
  strcpy(entity_9, entity_4);
}