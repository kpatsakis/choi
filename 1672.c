void fun()
{
  int entity_4 = 66;
  char entity_5[55] = "";
  entity_5 = NULL;
  char entity_8[49] = "";
  entity_8 = NULL;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  memset(entity_8, 'd', 49-1);
  entity_8[49-1]='';
  memset(entity_5, 'v', 55-1);
  entity_5[55-1]='';
  memset(entity_6, 'f', entity_4-1);
  entity_6[entity_4-1]='';
  entity_6[42] = 'A';
}