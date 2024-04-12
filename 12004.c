void fun()
{
  int entity_7 = 63;
  int entity_9 = 96;
  int entity_5 = 79;
  char entity_1[98] = "";
  char entity_6[31] = "";
  char* entity_3;
  memset(entity_1, 'n', 98-1);
  entity_1[98-1]='0';
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[0]='0';
  memset(entity_6, 'U', 31-1);
  entity_6[31-1]='0';
  strcpy(entity_3, entity_1);
}