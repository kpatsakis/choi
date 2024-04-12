void fun()
{
  int entity_8 = 75;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  memset(entity_7, 'O', entity_8-1);
  entity_7[entity_8-1]='';
  entity_7[90] = 'H';
}