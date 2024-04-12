void fun()
{
  int entity_0 = 55;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  memset(entity_5, 'F', entity_0-1);
  entity_5[entity_0-1]='';
  entity_5[83] = 'y';
}