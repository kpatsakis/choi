void fun()
{
  int entity_7 = 75;
  int entity_5 = 24;
  entity_7 = 75;
  char entity_1[entity_7] = "";
  char* entity_8;
  memset(entity_1, 'b', entity_7-1);
  entity_1[entity_7-1]='0';
  entity_8 = (char*)malloc(8*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_1);
}