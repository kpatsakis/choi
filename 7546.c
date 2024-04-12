void fun()
{
  int entity_2 = 1;
  entity_2 = 26;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  memset(entity_5, 'D', entity_2-1);
  entity_5[entity_2-1]='';
  entity_5[89] = 'H';
}