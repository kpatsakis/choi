void fun()
{
  int entity_2 = 1;
  entity_2 = 93;
  char entity_8 = 'W';
  char entity_9 = 'Z';
  char entity_5[27] = "";
  char* entity_4;
  memset(entity_5, 'v', 27-1);
  entity_5[27-1]='0';
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_5, 27*sizeof(char));
}