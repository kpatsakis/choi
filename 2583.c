void fun()
{
  int entity_3 = 64;
  int entity_9 = 4;
  int entity_2 = 75;
  char entity_7[57] = "";
  entity_7 = NULL;
  memset(entity_7, 'P', 57-1);
  entity_7[57-1]='';
  entity_9 = 64;
  entity_7[entity_9] = 'D';
}