void fun()
{
  int entity_8 = 91;
  int entity_1 = 34;
  char* entity_4;
  char* entity_2;
  char entity_9[79] = "";
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[0]='0';
  entity_2 = (char*)malloc(62*sizeof(char));
  entity_2[0]='0';
  memset(entity_9, 'v', 79-1);
  entity_9[79-1]='0';
  memcpy(entity_4, entity_9, 79*sizeof(char));
}