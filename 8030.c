void fun()
{
  int entity_7 = 92;
  char entity_2[93] = "";
  entity_2 = NULL;
  char entity_5[62] = "";
  entity_5 = NULL;
  memset(entity_5, 'J', 62-1);
  entity_5[62-1]='';
  memset(entity_2, 'd', 93-1);
  entity_2[93-1]='';
  entity_7 = 89;
  entity_5[entity_7] = 'v';
}