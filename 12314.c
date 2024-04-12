void fun()
{
  int entity_8 = 34;
  char entity_9[20] = "";
  char entity_5[54] = "";
  char entity_6[98] = "";
  char* entity_0;
  memset(entity_6, 'R', 98-1);
  entity_6[98-1]='0';
  memset(entity_9, 'P', 20-1);
  entity_9[20-1]='0';
  memset(entity_5, 'R', 54-1);
  entity_5[54-1]='0';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_6, 98*sizeof(char));
}