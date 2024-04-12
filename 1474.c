void fun()
{
  int entity_5 = 26;
  int entity_6 = 89;
  char entity_9 = 'Y';
  char entity_2[65] = "";
  entity_2 = NULL;
  memset(entity_2, 'U', 65-1);
  entity_2[65-1]='';
  entity_2[entity_6] = 'z';
}