void fun()
{
  int entity_5 = 21;
  int entity_4 = 90;
  int entity_1 = 0;
  int entity_2 = 30;
  entity_5 = 80;
  char entity_9[40] = "";
  entity_9 = NULL;
  memset(entity_9, 'v', 40-1);
  entity_9[40-1]='';
  entity_9[entity_5] = 'X';
}