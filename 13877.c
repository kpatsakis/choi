void fun()
{
  int entity_4 = 29;
  int entity_5 = 94;
  char entity_7[80] = "";
  char entity_3[56] = "";
  char* entity_1;
  memset(entity_3, 'o', 56-1);
  entity_3[56-1]='0';
  memset(entity_7, 'N', 80-1);
  entity_7[80-1]='0';
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[0]='0';
  entity_5 = 55;
  strcpy(entity_1, entity_3);
}