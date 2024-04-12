void fun()
{
  int entity_2 = 45;
  char entity_9[10] = "";
  entity_9 = NULL;
  char entity_6[19] = "";
  entity_6 = NULL;
  memset(entity_6, 'y', 19-1);
  entity_6[19-1]='';
  memset(entity_9, 'r', 10-1);
  entity_9[10-1]='';
  entity_6[entity_2] = 'O';
}