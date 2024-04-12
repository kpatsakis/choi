void fun()
{
  int entity_2 = 48;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  memset(entity_0, 'x', entity_2-1);
  entity_0[entity_2-1]='';
  entity_2 = 45;
  entity_0[96] = 'd';
}