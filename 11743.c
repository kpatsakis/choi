void fun()
{
  int entity_1 = 29;
  char* entity_4;
  char entity_9[86] = "";
  memset(entity_9, 'v', 86-1);
  entity_9[86-1]='0';
  entity_4 = (char*)malloc(91*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_9, 86*sizeof(char));
}