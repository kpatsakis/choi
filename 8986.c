void fun()
{
  int entity_1 = 24;
  int entity_8 = 59;
  char entity_4[42] = "";
  entity_4 = NULL;
  memset(entity_4, 'B', 42-1);
  entity_4[42-1]='';
  entity_4[entity_8] = 'V';
}