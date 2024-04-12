void fun()
{
  char entity_7[38] = "";
  entity_7 = NULL;
  char* entity_0;
  memset(entity_7, 'u', 38-1);
  entity_7[38-1]='';
  entity_0 = (char*)malloc(15*sizeof(char));
  entity_0[15-1]='';
  memcpy(entity_0, entity_7, 38*sizeof(char));
}