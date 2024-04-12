void fun()
{
  int entity_1 = 23;
  char entity_0[11] = "";
  entity_0 = NULL;
  memset(entity_0, 'p', 11-1);
  entity_0[11-1]='';
  entity_0[entity_1] = 'Z';
}