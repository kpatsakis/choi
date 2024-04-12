void fun()
{
  int entity_8 = 54;
  int entity_1 = 42;
  int entity_7 = 34;
  char entity_5[50] = "";
  entity_5 = NULL;
  memset(entity_5, 'B', 50-1);
  entity_5[50-1]='';
  entity_5[entity_1] = 'u';
}