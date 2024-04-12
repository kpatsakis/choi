void fun()
{
  char entity_6[20] = "";
  entity_6 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(60*sizeof(char));
  entity_4[60-1]='';
  memset(entity_6, 'l', 20-1);
  entity_6[20-1]='';
  memcpy(entity_4, entity_6, 20*sizeof(char));
}