void fun()
{
  int entity_0 = 47;
  char entity_3[80] = "";
  entity_3 = NULL;
  memset(entity_3, 'x', 80-1);
  entity_3[80-1]='';
  entity_0 = 83;
  entity_3[entity_0] = 'E';
}