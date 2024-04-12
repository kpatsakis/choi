void fun()
{
  int entity_8 = 53;
  int entity_9 = 23;
  char* entity_7;
  char entity_4[59] = "";
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[0]='0';
  memset(entity_4, 'A', 59-1);
  entity_4[59-1]='0';
  memcpy(entity_7, entity_4, 59*sizeof(char));
}