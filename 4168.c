void fun()
{
  int entity_3 = 91;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char entity_7[62] = "";
  entity_7 = NULL;
  char entity_4 = 'z';
  memset(entity_6, 'M', entity_3-1);
  entity_6[entity_3-1]='';
  memset(entity_7, 'e', 62-1);
  entity_7[62-1]='';
  entity_6[40] = 'T';
}