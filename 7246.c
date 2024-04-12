void fun()
{
  char* entity_1;
  char entity_9[50] = "";
  entity_9 = NULL;
  entity_1 = (char*)malloc(49*sizeof(char));
  entity_1[49-1]='';
  memset(entity_9, 't', 50-1);
  entity_9[50-1]='';
  memcpy(entity_1, entity_9, 50*sizeof(char));
}