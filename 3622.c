void fun()
{
  int entity_4 = 20;
  entity_4 = 9;
  char entity_1[96] = "";
  entity_1 = NULL;
  memset(entity_1, 'm', 96-1);
  entity_1[96-1]='';
  entity_1[entity_4] = 'Z';
}