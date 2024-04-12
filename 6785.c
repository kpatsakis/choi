void fun()
{
  int entity_4 = 36;
  int entity_9 = 96;
  entity_4 = 91;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  memset(entity_2, 'V', entity_4-1);
  entity_2[entity_4-1]='';
  entity_2[51] = 'O';
}