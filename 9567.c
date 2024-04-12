void fun()
{
  int entity_8 = 13;
  char entity_2[79] = "";
  entity_2 = NULL;
  char entity_4[90] = "";
  entity_4 = NULL;
  memset(entity_4, 's', 90-1);
  entity_4[90-1]='';
  memset(entity_2, 'J', 79-1);
  entity_2[79-1]='';
  entity_8 = 35;
  entity_2[entity_8] = 'a';
}