void fun()
{
  char entity_9[93] = "";
  entity_9 = NULL;
  char* entity_6;
  memset(entity_9, 'N', 93-1);
  entity_9[93-1]='';
  entity_6 = (char*)malloc(6*sizeof(char));
  entity_6[6-1]='';
  memcpy(entity_6, entity_9, 93*sizeof(char));
}