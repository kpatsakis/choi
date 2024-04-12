void fun()
{
  int entity_5 = 35;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  memset(entity_0, 'A', entity_5-1);
  entity_0[entity_5-1]='';
  entity_0[82] = 'F';
}