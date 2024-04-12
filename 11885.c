void fun()
{
  int entity_3 = 43;
  char* entity_8;
  char entity_1[27] = "";
  char entity_2[12] = "";
  char* entity_6;
  entity_6 = (char*)malloc(61*sizeof(char));
  entity_6[0]='0';
  memset(entity_1, 't', 27-1);
  entity_1[27-1]='0';
  memset(entity_2, 'K', 12-1);
  entity_2[12-1]='0';
  entity_8 = (char*)malloc(51*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_1);
}