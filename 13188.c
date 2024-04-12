void fun()
{
  int entity_1 = 72;
  char entity_0 = 's';
  char* entity_5;
  char* entity_6;
  char entity_7[88] = "";
  memset(entity_7, 'L', 88-1);
  entity_7[88-1]='0';
  entity_5 = (char*)malloc(26*sizeof(char));
  entity_5[0]='0';
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[0]='0';
  entity_1 = 51;
  memcpy(entity_6, entity_7, 88*sizeof(char));
}