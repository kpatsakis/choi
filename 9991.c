void fun()
{
  int entity_0 = 18;
  char entity_5[1] = "";
  entity_5 = NULL;
  char entity_2[13] = "";
  entity_2 = NULL;
  memset(entity_2, 'Z', 13-1);
  entity_2[13-1]='';
  memset(entity_5, 'j', 1-1);
  entity_5[1-1]='';
  entity_5[entity_0] = 'S';
}