void fun()
{
  int entity_9 = 73;
  char entity_8[11] = "";
  char* entity_4;
  char* entity_3;
  char entity_7[18] = "";
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[0]='0';
  memset(entity_7, 'o', 18-1);
  entity_7[18-1]='0';
  entity_4 = (char*)malloc(1*sizeof(char));
  entity_4[0]='0';
  memset(entity_8, 'Y', 11-1);
  entity_8[11-1]='0';
  entity_9 = 20;
  memcpy(entity_3, entity_8, 11*sizeof(char));
}