void fun()
{
  char* entity_9;
  char entity_0[30] = "";
  entity_0 = NULL;
  entity_9 = (char*)malloc(79*sizeof(char));
  entity_9[79-1]='';
  memset(entity_0, 'F', 30-1);
  entity_0[30-1]='';
  memcpy(entity_9, entity_0, 30*sizeof(char));
}