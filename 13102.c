void fun()
{
  int entity_1 = 7;
  char* entity_3;
  char entity_9[23] = "";
  memset(entity_9, 'i', 23-1);
  entity_9[23-1]='0';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[0]='0';
  entity_1 = 35;
  memcpy(entity_3, entity_9, 23*sizeof(char));
}