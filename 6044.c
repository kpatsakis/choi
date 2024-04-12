void fun()
{
  int entity_5 = 17;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  memset(entity_2, 'O', entity_5-1);
  entity_2[entity_5-1]='';
  entity_2[28] = 'O';
}