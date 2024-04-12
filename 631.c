void fun()
{
  int entity_4 = 60;
  int entity_8 = 50;
  entity_8 = 97;
  char entity_6[7] = "";
  entity_6 = NULL;
  char entity_7 = 'Y';
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  memset(entity_9, 'P', entity_8-1);
  entity_9[entity_8-1]='';
  memset(entity_6, 'W', 7-1);
  entity_6[7-1]='';
  entity_9[2] = 'N';
}