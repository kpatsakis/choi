void fun()
{
  int entity_1 = 20;
  char entity_3[23] = "";
  entity_3 = NULL;
  char entity_6[52] = "";
  entity_6 = NULL;
  memset(entity_3, 'O', 23-1);
  entity_3[23-1]='';
  memset(entity_6, 'o', 52-1);
  entity_6[52-1]='';
  entity_1 = 97;
  entity_3[entity_1] = 'w';
}