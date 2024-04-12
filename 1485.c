void fun()
{
  char entity_9[3] = "";
  entity_9 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(33*sizeof(char));
  entity_1[33-1]='';
  memset(entity_9, 'J', 3-1);
  entity_9[3-1]='';
  memcpy(entity_1, entity_9, 3*sizeof(char));
}