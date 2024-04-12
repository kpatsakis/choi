void fun()
{
  int entity_2 = 20;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char entity_3 = 's';
  memset(entity_5, 'j', entity_2-1);
  entity_5[entity_2-1]='';
  entity_5[10] = 'y';
}