void fun()
{
  int entity_0 = 93;
  char entity_5[34] = "";
  entity_5 = NULL;
  memset(entity_5, 'c', 34-1);
  entity_5[34-1]='';
  entity_5[entity_0] = 'k';
}