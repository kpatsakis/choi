void fun()
{
  int entity_9 = 5;
  char* entity_3;
  char entity_1[81] = "";
  memset(entity_1, 'h', 81-1);
  entity_1[81-1]='0';
  entity_3 = (char*)malloc(8*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_1, 81*sizeof(char));
}