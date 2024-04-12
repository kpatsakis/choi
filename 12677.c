void fun()
{
  int entity_6 = 1;
  char* entity_4;
  char entity_9[7] = "";
  memset(entity_9, 'T', 7-1);
  entity_9[7-1]='0';
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_9, 7*sizeof(char));
}