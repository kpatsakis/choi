void fun()
{
  int entity_1 = 75;
  entity_1 = 47;
  char entity_0[86] = "";
  entity_0 = NULL;
  char entity_2[49] = "";
  entity_2 = NULL;
  memset(entity_2, 'c', 49-1);
  entity_2[49-1]='';
  memset(entity_0, 'b', 86-1);
  entity_0[86-1]='';
  entity_2[entity_1] = 'S';
}