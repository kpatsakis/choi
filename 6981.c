void fun()
{
  int entity_4 = 74;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  memset(entity_7, 'J', entity_4-1);
  entity_7[entity_4-1]='';
  entity_7[24] = 'k';
}