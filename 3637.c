void fun()
{
  int entity_4 = 77;
  entity_4 = 35;
  char entity_3[71] = "";
  entity_3 = NULL;
  memset(entity_3, 'E', 71-1);
  entity_3[71-1]='';
  entity_3[entity_4] = 'V';
}