void fun()
{
  int entity_7 = 15;
  entity_7 = 19;
  char entity_1[17] = "";
  entity_1 = NULL;
  memset(entity_1, 'D', 17-1);
  entity_1[17-1]='';
  entity_1[entity_7] = 'h';
}