void fun()
{
  char entity_9[11] = "";
  entity_9 = NULL;
  char* entity_3;
  char entity_0 = 'N';
  entity_3 = (char*)malloc(66*sizeof(char));
  entity_3[66-1]='';
  memset(entity_9, 'W', 11-1);
  entity_9[11-1]='';
  memcpy(entity_3, entity_9, 11*sizeof(char));
}