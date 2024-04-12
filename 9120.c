void fun()
{
  char entity_1[50] = "";
  entity_1 = NULL;
  char* entity_9;
  char entity_3[8] = "";
  entity_3 = NULL;
  memset(entity_1, 'U', 50-1);
  entity_1[50-1]='';
  memset(entity_3, 'I', 8-1);
  entity_3[8-1]='';
  entity_9 = (char*)malloc(2*sizeof(char));
  entity_9[2-1]='';
  memcpy(entity_9, entity_1, 50*sizeof(char));
}