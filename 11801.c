void fun()
{
  int entity_5 = 77;
  char* entity_3;
  char entity_9[33] = "";
  char entity_1 = 'g';
  entity_3 = (char*)malloc(37*sizeof(char));
  entity_3[0]='0';
  memset(entity_9, 'n', 33-1);
  entity_9[33-1]='0';
  memcpy(entity_3, entity_9, 33*sizeof(char));
}