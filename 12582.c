void fun()
{
  int entity_6 = 25;
  char* entity_8;
  char entity_9[entity_6] = "";
  char* entity_0;
  memset(entity_9, 'K', entity_6-1);
  entity_9[entity_6-1]='0';
  entity_8 = (char*)malloc(19*sizeof(char));
  entity_8[0]='0';
  entity_0 = (char*)malloc(26*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_8, entity_9);
}