void fun()
{
  int entity_2 = 23;
  entity_2 = 88;
  char entity_7[12] = "";
  entity_7 = NULL;
  char entity_3[76] = "";
  entity_3 = NULL;
  memset(entity_3, 'z', 76-1);
  entity_3[76-1]='';
  memset(entity_7, 'k', 12-1);
  entity_7[12-1]='';
  entity_7[entity_2] = 'K';
}