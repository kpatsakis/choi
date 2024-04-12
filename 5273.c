void fun()
{
  int entity_1 = 49;
  int entity_7 = 38;
  entity_1 = 4;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  char entity_2[55] = "";
  entity_2 = NULL;
  memset(entity_2, 'S', 55-1);
  entity_2[55-1]='';
  memset(entity_8, 'C', entity_1-1);
  entity_8[entity_1-1]='';
  entity_8[7] = 'B';
}