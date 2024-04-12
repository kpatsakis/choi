void fun()
{
  int entity_5 = 40;
  entity_5 = 40;
  char* entity_8;
  char* entity_0;
  char entity_9[8] = "";
  char entity_6[entity_5] = "";
  entity_8 = (char*)malloc(29*sizeof(char));
  entity_8[0]='0';
  entity_0 = (char*)malloc(16*sizeof(char));
  entity_0[0]='0';
  memset(entity_6, 'J', entity_5-1);
  entity_6[entity_5-1]='0';
  memset(entity_9, 'C', 8-1);
  entity_9[8-1]='0';
  strcpy(entity_8, entity_6);
}