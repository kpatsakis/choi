void fun()
{
  int entity_2 = 47;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  memset(entity_0, 'X', entity_2-1);
  entity_0[entity_2-1]='';
  entity_2 = 64;
  entity_0[69] = 'x';
}