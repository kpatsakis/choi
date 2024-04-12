void fun()
{
  int entity_7 = 41;
  int entity_4 = 2;
  char entity_1 = 'n';
  char entity_3[28] = "";
  entity_3 = NULL;
  memset(entity_3, 'x', 28-1);
  entity_3[28-1]='';
  entity_3[entity_7] = 'U';
}