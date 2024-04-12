void fun()
{
  int entity_1 = 48;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char entity_8[81] = "";
  entity_8 = NULL;
  char entity_3 = 'c';
  memset(entity_6, 'x', entity_1-1);
  entity_6[entity_1-1]='';
  memset(entity_8, 'Y', 81-1);
  entity_8[81-1]='';
  entity_6[10] = 'X';
}