void fun()
{
  char* entity_4;
  char entity_0[38] = "";
  entity_0 = NULL;
  memset(entity_0, 'Q', 38-1);
  entity_0[38-1]='';
  entity_4 = (char*)malloc(60*sizeof(char));
  entity_4[60-1]='';
  memcpy(entity_4, entity_0, 38*sizeof(char));
}