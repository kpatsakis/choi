void fun()
{
  int entity_8 = 30;
  entity_8 = 10;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char entity_6 = 'v';
  memset(entity_2, 'D', entity_8-1);
  entity_2[entity_8-1]='';
  entity_2[18] = 'm';
}