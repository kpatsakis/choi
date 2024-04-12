void fun()
{
  int entity_4 = 10;
  int entity_8 = 10;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  memset(entity_5, 'O', entity_4-1);
  entity_5[entity_4-1]='';
  entity_4 = 97;
  entity_5[75] = 'm';
}