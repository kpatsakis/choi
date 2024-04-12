void fun()
{
  int entity_0 = 43;
  char entity_5[95] = "";
  entity_5 = NULL;
  memset(entity_5, 'x', 95-1);
  entity_5[95-1]='';
  entity_5[entity_0] = 'w';
}