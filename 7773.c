void fun()
{
  int entity_2 = 30;
  int entity_1 = 47;
  entity_2 = 41;
  char entity_4[100] = "";
  entity_4 = NULL;
  memset(entity_4, 'l', 100-1);
  entity_4[100-1]='';
  entity_4[entity_2] = 'n';
}