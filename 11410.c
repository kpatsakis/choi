void fun()
{
  int entity_8 = 8;
  int entity_5 = 73;
  char* entity_3;
  char entity_9[63] = "";
  char entity_1 = 'i';
  entity_3 = (char*)malloc(93*sizeof(char));
  entity_3[0]='0';
  memset(entity_9, 'v', 63-1);
  entity_9[63-1]='0';
  memcpy(entity_3, entity_9, 63*sizeof(char));
}