void fun()
{
  int entity_0 = 35;
  entity_0 = 63;
  char entity_5[14] = "";
  entity_5 = NULL;
  memset(entity_5, 'A', 14-1);
  entity_5[14-1]='';
  entity_5[entity_0] = 'G';
}