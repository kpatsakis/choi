void fun()
{
  int entity_5 = 91;
  char entity_1[72] = "";
  entity_1 = NULL;
  char entity_2[14] = "";
  entity_2 = NULL;
  memset(entity_2, 'C', 14-1);
  entity_2[14-1]='';
  memset(entity_1, 'h', 72-1);
  entity_1[72-1]='';
  entity_5 = 90;
  entity_1[entity_5] = 'v';
}