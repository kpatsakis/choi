void fun()
{
  int entity_2 = 56;
  char entity_0[73] = "";
  entity_0 = NULL;
  memset(entity_0, 'q', 73-1);
  entity_0[73-1]='';
  entity_0[entity_2] = 'y';
}