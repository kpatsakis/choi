void fun()
{
  int entity_7 = 50;
  int entity_5 = 81;
  char entity_3[50] = "";
  entity_3 = NULL;
  memset(entity_3, 'c', 50-1);
  entity_3[50-1]='';
  entity_3[entity_5] = 'n';
}