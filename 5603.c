void fun()
{
  int entity_2 = 59;
  int entity_7 = 75;
  char entity_4[83] = "";
  entity_4 = NULL;
  memset(entity_4, 'X', 83-1);
  entity_4[83-1]='';
  entity_4[entity_7] = 'Z';
}