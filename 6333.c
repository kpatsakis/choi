void fun()
{
  char entity_5[2] = "";
  entity_5 = NULL;
  char* entity_9;
  memset(entity_5, 'U', 2-1);
  entity_5[2-1]='';
  entity_9 = (char*)malloc(65*sizeof(char));
  entity_9[65-1]='';
  memcpy(entity_9, entity_5, 2*sizeof(char));
}