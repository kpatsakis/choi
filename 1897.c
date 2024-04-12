void fun()
{
  int entity_4 = 66;
  char entity_2[58] = "";
  entity_2 = NULL;
  memset(entity_2, 'w', 58-1);
  entity_2[58-1]='';
  entity_4 = 46;
  entity_2[entity_4] = 'K';
}