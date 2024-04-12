void fun()
{
  int entity_1 = 51;
  char entity_3[19] = "";
  entity_3 = NULL;
  memset(entity_3, 'J', 19-1);
  entity_3[19-1]='';
  entity_1 = 91;
  entity_3[entity_1] = 'F';
}