void fun()
{
  int entity_8 = 76;
  char entity_5[100] = "";
  entity_5 = NULL;
  char entity_2 = 'm';
  char entity_3 = 'c';
  memset(entity_5, 'W', 100-1);
  entity_5[100-1]='';
  entity_5[entity_8] = 's';
}