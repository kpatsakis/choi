void fun()
{
  int entity_5 = 12;
  int entity_1 = 85;
  int entity_4 = 99;
  char* entity_3;
  char entity_7[18] = "";
  char entity_8[28] = "";
  memset(entity_7, 'v', 18-1);
  entity_7[18-1]='0';
  memset(entity_8, 'D', 28-1);
  entity_8[28-1]='0';
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_8, 28*sizeof(char));
}