void fun()
{
  char entity_9[60] = "";
  entity_9 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(24*sizeof(char));
  entity_6[24-1]='';
  memset(entity_9, 'm', 60-1);
  entity_9[60-1]='';
  memcpy(entity_6, entity_9, 60*sizeof(char));
}