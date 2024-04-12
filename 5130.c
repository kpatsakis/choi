void fun()
{
  int entity_3 = 43;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  memset(entity_5, 'v', entity_3-1);
  entity_5[entity_3-1]='';
  entity_5[91] = 'S';
}