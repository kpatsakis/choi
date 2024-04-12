void fun()
{
  int entity_5 = 43;
  entity_5 = 100;
  char entity_0[18] = "";
  entity_0 = NULL;
  memset(entity_0, 'B', 18-1);
  entity_0[18-1]='';
  entity_0[entity_5] = 'd';
}