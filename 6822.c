void fun()
{
  int entity_8 = 34;
  char entity_7[54] = "";
  entity_7 = NULL;
  char entity_2 = 'v';
  char entity_6[52] = "";
  entity_6 = NULL;
  memset(entity_7, 't', 54-1);
  entity_7[54-1]='';
  memset(entity_6, 'Z', 52-1);
  entity_6[52-1]='';
  entity_7[entity_8] = 'K';
}