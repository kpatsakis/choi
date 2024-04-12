void fun()
{
  char entity_8[12] = "";
  entity_8 = NULL;
  char entity_4[30] = "";
  entity_4 = NULL;
  char* entity_9;
  memset(entity_4, 'u', 30-1);
  entity_4[30-1]='';
  memset(entity_8, 'U', 12-1);
  entity_8[12-1]='';
  entity_9 = (char*)malloc(94*sizeof(char));
  entity_9[94-1]='';
  memcpy(entity_9, entity_8, 12*sizeof(char));
}