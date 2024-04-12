void fun()
{
  int entity_4 = 54;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  memset(entity_3, 'A', entity_4-1);
  entity_3[entity_4-1]='';
  entity_3[100] = 'W';
}