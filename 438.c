void fun()
{
  char entity_9[81] = "";
  entity_9 = NULL;
  char* entity_6;
  memset(entity_9, 'n', 81-1);
  entity_9[81-1]='';
  entity_6 = (char*)malloc(76*sizeof(char));
  entity_6[76-1]='';
  memcpy(entity_6, entity_9, 81*sizeof(char));
}