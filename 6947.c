void fun()
{
  int entity_7 = 70;
  entity_7 = 64;
  char entity_5 = 'u';
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  memset(entity_2, 'V', entity_7-1);
  entity_2[entity_7-1]='';
  entity_2[39] = 'G';
}