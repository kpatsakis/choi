void fun()
{
  int entity_9 = 59;
  int entity_3 = 13;
  int entity_6 = 80;
  char entity_5[84] = "";
  entity_5 = NULL;
  char entity_7[84] = "";
  entity_7 = NULL;
  memset(entity_5, 'R', 84-1);
  entity_5[84-1]='';
  memset(entity_7, 'H', 84-1);
  entity_7[84-1]='';
  entity_7[entity_6] = 'G';
}