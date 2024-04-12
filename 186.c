void fun()
{
  int entity_5 = 45;
  char entity_0[99] = "";
  entity_0 = NULL;
  memset(entity_0, 'm', 99-1);
  entity_0[99-1]='';
  entity_0[entity_5] = 'w';
}