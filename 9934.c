void fun()
{
  int entity_2 = 30;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  memset(entity_4, 'a', entity_2-1);
  entity_4[entity_2-1]='';
  entity_4[62] = 'm';
}