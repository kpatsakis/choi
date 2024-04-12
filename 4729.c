void fun()
{
  char entity_9[91] = "";
  entity_9 = NULL;
  char* entity_0;
  char entity_6[81] = "";
  entity_6 = NULL;
  entity_0 = (char*)malloc(35*sizeof(char));
  entity_0[35-1]='';
  memset(entity_6, 'o', 81-1);
  entity_6[81-1]='';
  memset(entity_9, 'y', 91-1);
  entity_9[91-1]='';
  memcpy(entity_0, entity_6, 81*sizeof(char));
}