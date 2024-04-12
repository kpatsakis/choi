void fun()
{
  int entity_8 = 64;
  char entity_1[7] = "";
  char* entity_4;
  char* entity_5;
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[0]='0';
  entity_5 = (char*)malloc(4*sizeof(char));
  entity_5[0]='0';
  memset(entity_1, 'C', 7-1);
  entity_1[7-1]='0';
  entity_8 = 22;
  memcpy(entity_4, entity_1, 7*sizeof(char));
}