void fun()
{
  int entity_3 = 70;
  char entity_6[57] = "";
  entity_6 = NULL;
  char entity_7[87] = "";
  entity_7 = NULL;
  memset(entity_6, 'E', 57-1);
  entity_6[57-1]='';
  memset(entity_7, 'T', 87-1);
  entity_7[87-1]='';
  entity_6[entity_3] = 'Y';
}