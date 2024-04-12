void fun()
{
  char* entity_9;
  char entity_0[52] = "";
  entity_0 = NULL;
  char entity_8[63] = "";
  entity_8 = NULL;
  memset(entity_0, 'n', 52-1);
  entity_0[52-1]='';
  memset(entity_8, 't', 63-1);
  entity_8[63-1]='';
  entity_9 = (char*)malloc(4*sizeof(char));
  entity_9[4-1]='';
  memcpy(entity_9, entity_8, 63*sizeof(char));
}