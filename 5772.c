void fun()
{
  int entity_8 = 85;
  entity_8 = 84;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char entity_9 = 'X';
  memset(entity_7, 'm', entity_8-1);
  entity_7[entity_8-1]='';
  entity_7[46] = 'O';
}