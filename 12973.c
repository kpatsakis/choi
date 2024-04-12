void fun()
{
  int entity_2 = 73;
  int entity_0 = 45;
  char entity_1[24] = "";
  char entity_9 = 's';
  char* entity_5;
  char* entity_8;
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[0]='0';
  memset(entity_1, 'C', 24-1);
  entity_1[24-1]='0';
  entity_5 = (char*)malloc(31*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_8, entity_1, 24*sizeof(char));
}