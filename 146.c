void fun()
{
  int entity_3 = 97;
  char entity_1[52] = "";
  entity_1 = NULL;
  char entity_5[16] = "";
  entity_5 = NULL;
  memset(entity_1, 'v', 52-1);
  entity_1[52-1]='';
  memset(entity_5, 'M', 16-1);
  entity_5[16-1]='';
  entity_3 = 38;
  entity_1[entity_3] = 'z';
}