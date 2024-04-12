void fun()
{
  int entity_5 = 98;
  entity_5 = 91;
  char entity_1[85] = "";
  entity_1 = NULL;
  memset(entity_1, 'i', 85-1);
  entity_1[85-1]='';
  entity_1[entity_5] = 's';
}