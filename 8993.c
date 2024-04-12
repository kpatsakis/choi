void fun()
{
  char* entity_9;
  char entity_7[63] = "";
  entity_7 = NULL;
  memset(entity_7, 't', 63-1);
  entity_7[63-1]='';
  entity_9 = (char*)malloc(51*sizeof(char));
  entity_9[51-1]='';
  strcpy(entity_9, entity_7);
}