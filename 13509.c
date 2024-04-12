void fun()
{
  int entity_3 = 55;
  int entity_9 = 53;
  entity_9 = 67;
  char* entity_4;
  char entity_6[80] = "";
  memset(entity_6, 'E', 80-1);
  entity_6[80-1]='0';
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_6, 80*sizeof(char));
}