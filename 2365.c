void fun()
{
  int entity_8 = 34;
  int entity_7 = 31;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  memset(entity_2, 'O', entity_7-1);
  entity_2[entity_7-1]='';
  entity_2[80] = 'V';
}