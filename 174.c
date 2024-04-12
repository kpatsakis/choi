void fun()
{
  int entity_4 = 37;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  memset(entity_5, 'x', entity_4-1);
  entity_5[entity_4-1]='';
  entity_5[31] = 'Y';
}