void fun()
{
  int entity_9 = 93;
  char* entity_2;
  char entity_3[59] = "";
  memset(entity_3, 'K', 59-1);
  entity_3[59-1]='0';
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_3, 59*sizeof(char));
}