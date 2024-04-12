void fun()
{
  int entity_1 = 63;
  char* entity_0;
  char entity_8[21] = "";
  char entity_3 = 'O';
  char entity_7[79] = "";
  memset(entity_7, 'T', 79-1);
  entity_7[79-1]='0';
  memset(entity_8, 'W', 21-1);
  entity_8[21-1]='0';
  entity_0 = (char*)malloc(96*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_8, 21*sizeof(char));
}