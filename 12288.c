void fun()
{
  int entity_8 = 90;
  char* entity_0;
  char* entity_5;
  char entity_9[63] = "";
  char entity_3[16] = "";
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[0]='0';
  memset(entity_9, 'D', 63-1);
  entity_9[63-1]='0';
  memset(entity_3, 'X', 16-1);
  entity_3[16-1]='0';
  entity_0 = (char*)malloc(26*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_5, entity_3, 16*sizeof(char));
}