void fun()
{
  int entity_3 = 14;
  int entity_8 = 35;
  int entity_9 = 59;
  entity_3 = 38;
  char entity_7[57] = "";
  entity_7 = NULL;
  memset(entity_7, 'K', 57-1);
  entity_7[57-1]='';
  entity_7[entity_3] = 'H';
}