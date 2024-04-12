void fun()
{
  int entity_2 = 12;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  memset(entity_0, 'Z', entity_2-1);
  entity_0[entity_2-1]='';
  entity_2 = 13;
  entity_0[31] = 'E';
}