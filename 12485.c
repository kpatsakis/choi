void fun()
{
  int entity_6 = 78;
  char entity_5[23] = "";
  char* entity_7;
  char entity_4[4] = "";
  char* entity_3;
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[0]='0';
  entity_7 = (char*)malloc(77*sizeof(char));
  entity_7[0]='0';
  memset(entity_5, 'M', 23-1);
  entity_5[23-1]='0';
  memset(entity_4, 'G', 4-1);
  entity_4[4-1]='0';
  strcpy(entity_3, entity_5);
}