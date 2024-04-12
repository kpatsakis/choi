void fun()
{
  int entity_5 = 74;
  char entity_0[43] = "";
  entity_0 = NULL;
  char entity_8[14] = "";
  entity_8 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(84*sizeof(char));
  entity_9[84-1]='';
  memset(entity_0, 'N', 43-1);
  entity_0[43-1]='';
  memset(entity_8, 'c', 14-1);
  entity_8[14-1]='';
  strcpy(entity_9, entity_0);
}