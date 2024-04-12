void fun()
{
  int entity_5 = 88;
  char entity_3[25] = "";
  char entity_7[100] = "";
  char* entity_4;
  char entity_8[39] = "";
  memset(entity_3, 'p', 25-1);
  entity_3[25-1]='0';
  memset(entity_8, 'L', 39-1);
  entity_8[39-1]='0';
  memset(entity_7, 'j', 100-1);
  entity_7[100-1]='0';
  entity_4 = (char*)malloc(35*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_7, 100*sizeof(char));
}