void fun()
{
  int entity_5 = 75;
  entity_5 = 99;
  char entity_3[89] = "";
  entity_3 = NULL;
  memset(entity_3, 'E', 89-1);
  entity_3[89-1]='';
  entity_3[entity_5] = 'q';
}