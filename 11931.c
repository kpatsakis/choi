void fun()
{
  char* entity_0;
  char* entity_5;
  char entity_7[30] = "";
  char entity_8[30] = "";
  char entity_4 = 'c';
  memset(entity_8, 'N', 30-1);
  entity_8[30-1]='0';
  memset(entity_7, 'i', 30-1);
  entity_7[30-1]='0';
  entity_5 = (char*)malloc(68*sizeof(char));
  entity_5[0]='0';
  entity_0 = (char*)malloc(84*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_5, entity_7);
}