void fun()
{
  char* entity_7;
  char entity_8[60] = "";
  entity_8 = NULL;
  memset(entity_8, 't', 60-1);
  entity_8[60-1]='';
  entity_7 = (char*)malloc(96*sizeof(char));
  entity_7[96-1]='';
  memcpy(entity_7, entity_8, 60*sizeof(char));
}