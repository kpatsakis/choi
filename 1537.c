void fun()
{
  int entity_3 = 99;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  memset(entity_0, 'M', entity_3-1);
  entity_0[entity_3-1]='';
  entity_0[21] = 'h';
}