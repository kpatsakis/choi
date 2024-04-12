void fun()
{
  int entity_4 = 77;
  int entity_7 = 37;
  char* entity_1;
  char entity_6[20] = "";
  char entity_9 = 'Y';
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[0]='0';
  memset(entity_6, 'I', 20-1);
  entity_6[20-1]='0';
  memcpy(entity_1, entity_6, 20*sizeof(char));
}