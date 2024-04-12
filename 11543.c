void fun()
{
  char* entity_2;
  char entity_9[32] = "";
  entity_2 = (char*)malloc(93*sizeof(char));
  entity_2[0]='0';
  memset(entity_9, 'm', 32-1);
  entity_9[32-1]='0';
  memcpy(entity_2, entity_9, 32*sizeof(char));
}