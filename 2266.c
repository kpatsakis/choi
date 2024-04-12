void fun()
{
  char entity_9[60] = "";
  entity_9 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(86*sizeof(char));
  entity_6[86-1]='';
  memset(entity_9, 'Z', 60-1);
  entity_9[60-1]='';
  memcpy(entity_6, entity_9, 60*sizeof(char));
}