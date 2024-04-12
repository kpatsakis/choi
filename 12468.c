void fun()
{
  int entity_5 = 9;
  char entity_4[88] = "";
  char* entity_0;
  char entity_3[29] = "";
  char* entity_7;
  entity_0 = (char*)malloc(10*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'h', 88-1);
  entity_4[88-1]='0';
  memset(entity_3, 'D', 29-1);
  entity_3[29-1]='0';
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_4, 88*sizeof(char));
}