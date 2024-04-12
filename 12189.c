void fun()
{
  int entity_1 = 100;
  char* entity_2;
  char entity_4[12] = "";
  char* entity_7;
  char* entity_3;
  entity_3 = (char*)malloc(68*sizeof(char));
  entity_3[0]='0';
  memset(entity_4, 'R', 12-1);
  entity_4[12-1]='0';
  entity_2 = (char*)malloc(53*sizeof(char));
  entity_2[0]='0';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_4);
}