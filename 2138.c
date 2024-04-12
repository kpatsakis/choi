void fun()
{
  char entity_0[94] = "";
  entity_0 = NULL;
  char* entity_3;
  char entity_9 = 'N';
  entity_3 = (char*)malloc(66*sizeof(char));
  entity_3[66-1]='';
  memset(entity_0, 'T', 94-1);
  entity_0[94-1]='';
  memcpy(entity_3, entity_0, 94*sizeof(char));
}