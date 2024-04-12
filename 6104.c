void fun()
{
  int entity_1 = 48;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  char entity_4[98] = "";
  entity_4 = NULL;
  char entity_2[25] = "";
  entity_2 = NULL;
  memset(entity_8, 'z', entity_1-1);
  entity_8[entity_1-1]='';
  memset(entity_2, 't', 25-1);
  entity_2[25-1]='';
  memset(entity_4, 'p', 98-1);
  entity_4[98-1]='';
  entity_8[34] = 'e';
}