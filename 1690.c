void fun()
{
  int entity_8 = 29;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char entity_3 = 'q';
  memset(entity_2, 'U', entity_8-1);
  entity_2[entity_8-1]='';
  entity_8 = 80;
  entity_2[2] = 'o';
}