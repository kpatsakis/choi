void fun()
{
  int entity_5 = 36;
  int entity_9 = 54;
  char entity_4[59] = "";
  char* entity_1;
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[0]='0';
  memset(entity_4, 'u', 59-1);
  entity_4[59-1]='0';
  memcpy(entity_1, entity_4, 59*sizeof(char));
}