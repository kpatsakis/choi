void fun()
{
  int entity_4 = 75;
  char entity_5[100] = "";
  entity_5 = NULL;
  memset(entity_5, 'A', 100-1);
  entity_5[100-1]='';
  entity_5[entity_4] = 'y';
}