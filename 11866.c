void fun()
{
  char entity_4[69] = "";
  char* entity_1;
  char* entity_3;
  char* entity_7;
  char* entity_0;
  memset(entity_4, 'a', 69-1);
  entity_4[69-1]='0';
  entity_1 = (char*)malloc(85*sizeof(char));
  entity_1[0]='0';
  entity_0 = (char*)malloc(70*sizeof(char));
  entity_0[0]='0';
  entity_3 = (char*)malloc(62*sizeof(char));
  entity_3[0]='0';
  entity_7 = (char*)malloc(85*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_3, entity_4);
}