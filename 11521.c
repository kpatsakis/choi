void fun()
{
  char entity_9[65] = "";
  char* entity_5;
  memset(entity_9, 'x', 65-1);
  entity_9[65-1]='0';
  entity_5 = (char*)malloc(28*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_9, 65*sizeof(char));
}