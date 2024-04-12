void fun()
{
  int entity_5 = 58;
  int entity_6 = 24;
  char* entity_1;
  char entity_8[98] = "";
  char entity_3[entity_6] = "";
  memset(entity_8, 'X', 98-1);
  entity_8[98-1]='0';
  entity_1 = (char*)malloc(42*sizeof(char));
  entity_1[0]='0';
  memset(entity_3, 'B', entity_6-1);
  entity_3[entity_6-1]='0';
  memcpy(entity_1, entity_3, entity_6*sizeof(char));
}