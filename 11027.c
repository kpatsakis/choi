void fun()
{
  char* entity_9;
  char entity_1[81] = "";
  memset(entity_1, 'A', 81-1);
  entity_1[81-1]='0';
  entity_9 = (char*)malloc(2*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_1, 81*sizeof(char));
}