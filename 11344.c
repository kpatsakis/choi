void fun()
{
  int entity_8 = 95;
  char entity_1[4] = "";
  char* entity_4;
  char* entity_3;
  memset(entity_1, 'h', 4-1);
  entity_1[4-1]='0';
  entity_4 = (char*)malloc(6*sizeof(char));
  entity_4[0]='0';
  entity_3 = (char*)malloc(9*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_1, 4*sizeof(char));
}