void fun()
{
  int entity_0 = 28;
  entity_0 = 30;
  char entity_3[52] = "";
  entity_3 = NULL;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  memset(entity_3, 'h', 52-1);
  entity_3[52-1]='';
  memset(entity_7, 'W', entity_0-1);
  entity_7[entity_0-1]='';
  entity_7[56] = 'P';
}