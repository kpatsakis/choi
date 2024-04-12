void fun()
{
  char entity_9[35] = "";
  entity_9 = NULL;
  char* entity_0;
  memset(entity_9, 'K', 35-1);
  entity_9[35-1]='';
  entity_0 = (char*)malloc(70*sizeof(char));
  entity_0[70-1]='';
  strcpy(entity_0, entity_9);
}