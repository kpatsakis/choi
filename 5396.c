void fun()
{
  int entity_0 = 46;
  char* entity_8;
  char entity_9 = 'K';
  char entity_5[34] = "";
  entity_5 = NULL;
  char entity_4[52] = "";
  entity_4 = NULL;
  memset(entity_4, 'B', 52-1);
  entity_4[52-1]='';
  memset(entity_5, 'l', 34-1);
  entity_5[34-1]='';
  entity_8 = (char*)malloc(37*sizeof(char));
  entity_8[37-1]='';
  entity_4[entity_0] = 'P';
}