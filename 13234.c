void fun()
{
  int entity_9 = 65;
  int entity_0 = 37;
  entity_0 = 85;
  char entity_8[80] = "";
  char* entity_4;
  char entity_1[11] = "";
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[0]='0';
  memset(entity_8, 'O', 80-1);
  entity_8[80-1]='0';
  memset(entity_1, 'u', 11-1);
  entity_1[11-1]='0';
  memcpy(entity_4, entity_1, 11*sizeof(char));
}