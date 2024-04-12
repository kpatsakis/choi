void fun()
{
  int entity_9 = 44;
  int entity_4 = 16;
  entity_4 = 61;
  char entity_5[32] = "";
  char* entity_1;
  char entity_7 = 'O';
  char* entity_8;
  memset(entity_5, 'd', 32-1);
  entity_5[32-1]='0';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[0]='0';
  entity_1 = (char*)malloc(3*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_8, entity_5, 32*sizeof(char));
}