void fun()
{
  char entity_9[30] = "";
  char* entity_1;
  entity_1 = (char*)malloc(23*sizeof(char));
  entity_1[0]='0';
  memset(entity_9, 'q', 30-1);
  entity_9[30-1]='0';
  memcpy(entity_1, entity_9, 30*sizeof(char));
}