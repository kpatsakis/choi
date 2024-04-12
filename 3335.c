void fun()
{
  int entity_1 = 5;
  char entity_3[50] = "";
  entity_3 = NULL;
  memset(entity_3, 'm', 50-1);
  entity_3[50-1]='';
  entity_3[entity_1] = 'M';
}