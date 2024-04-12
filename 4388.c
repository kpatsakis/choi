void fun()
{
  int entity_1 = 42;
  char entity_2[2] = "";
  entity_2 = NULL;
  char entity_8[33] = "";
  entity_8 = NULL;
  char entity_5[48] = "";
  entity_5 = NULL;
  memset(entity_5, 'l', 48-1);
  entity_5[48-1]='';
  memset(entity_2, 's', 2-1);
  entity_2[2-1]='';
  memset(entity_8, 'Q', 33-1);
  entity_8[33-1]='';
  entity_1 = 16;
  entity_5[entity_1] = 'f';
}