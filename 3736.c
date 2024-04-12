void fun()
{
  int entity_0 = 19;
  char entity_5[100] = "";
  entity_5 = NULL;
  memset(entity_5, 'P', 100-1);
  entity_5[100-1]='';
  entity_5[entity_0] = 'H';
}