void fun()
{
  char entity_3[32] = "";
  entity_3 = NULL;
  char* entity_9;
  char entity_1 = 'T';
  memset(entity_3, 'k', 32-1);
  entity_3[32-1]='';
  entity_9 = (char*)malloc(10*sizeof(char));
  entity_9[10-1]='';
  memcpy(entity_9, entity_3, 32*sizeof(char));
}