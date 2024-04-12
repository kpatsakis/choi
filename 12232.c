void fun()
{
  int entity_8 = 61;
  char* entity_0;
  char* entity_1;
  char* entity_3;
  char entity_2[4] = "";
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[0]='0';
  memset(entity_2, 'd', 4-1);
  entity_2[4-1]='0';
  entity_3 = (char*)malloc(76*sizeof(char));
  entity_3[0]='0';
  entity_1 = (char*)malloc(68*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_0, entity_2);
}