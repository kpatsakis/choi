void fun()
{
  int entity_3 = 54;
  int entity_0 = 64;
  char entity_5[23] = "";
  entity_5 = NULL;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  memset(entity_5, 'h', 23-1);
  entity_5[23-1]='';
  memset(entity_2, 'Q', entity_3-1);
  entity_2[entity_3-1]='';
  entity_2[54] = 'H';
}