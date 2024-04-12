void fun()
{
  char entity_6[39] = "";
  entity_6 = NULL;
  char* entity_9;
  memset(entity_6, 'c', 39-1);
  entity_6[39-1]='';
  entity_9 = (char*)malloc(12*sizeof(char));
  entity_9[12-1]='';
  memcpy(entity_9, entity_6, 39*sizeof(char));
}