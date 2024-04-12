void fun()
{
  int entity_8 = 34;
  entity_8 = 37;
  char entity_4[67] = "";
  entity_4 = NULL;
  char entity_2 = 'J';
  char entity_5[13] = "";
  entity_5 = NULL;
  memset(entity_4, 'm', 67-1);
  entity_4[67-1]='';
  memset(entity_5, 'z', 13-1);
  entity_5[13-1]='';
  entity_4[entity_8] = 'n';
}