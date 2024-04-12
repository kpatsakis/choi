void fun()
{
  int entity_5 = 53;
  char* entity_7;
  char* entity_3;
  char entity_8[entity_5] = "";
  char entity_9[49] = "";
  memset(entity_9, 'H', 49-1);
  entity_9[49-1]='0';
  entity_7 = (char*)malloc(87*sizeof(char));
  entity_7[0]='0';
  memset(entity_8, 'C', entity_5-1);
  entity_8[entity_5-1]='0';
  entity_3 = (char*)malloc(26*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_7, entity_8);
}