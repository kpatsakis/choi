void fun()
{
  int entity_5 = 44;
  int entity_1 = 29;
  char entity_3 = 'r';
  char entity_8[49] = "";
  entity_8 = NULL;
  char entity_9[99] = "";
  entity_9 = NULL;
  memset(entity_8, 'M', 49-1);
  entity_8[49-1]='';
  memset(entity_9, 'O', 99-1);
  entity_9[99-1]='';
  entity_8[entity_5] = 'W';
}