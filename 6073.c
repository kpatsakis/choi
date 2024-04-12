void fun()
{
  int entity_7 = 38;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  char entity_2 = 'F';
  memset(entity_6, 'K', entity_7-1);
  entity_6[entity_7-1]='';
  entity_6[50] = 'k';
}