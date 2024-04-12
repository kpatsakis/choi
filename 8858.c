void fun()
{
  int entity_8 = 44;
  entity_8 = 31;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  memset(entity_2, 'W', entity_8-1);
  entity_2[entity_8-1]='';
  entity_2[65] = 'M';
}