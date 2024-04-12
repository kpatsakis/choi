void fun()
{
  int entity_1 = 58;
  int entity_8 = 1;
  char entity_4[34] = "";
  char entity_2[2] = "";
  char* entity_5;
  char entity_7[65] = "";
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[0]='0';
  memset(entity_4, 'Z', 34-1);
  entity_4[34-1]='0';
  memset(entity_2, 'G', 2-1);
  entity_2[2-1]='0';
  memset(entity_7, 'E', 65-1);
  entity_7[65-1]='0';
  strcpy(entity_5, entity_7);
}