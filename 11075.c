void fun()
{
  char* entity_5;
  char* entity_3;
  char entity_2[22] = "";
  char* entity_4;
  char* entity_6;
  entity_6 = (char*)malloc(17*sizeof(char));
  entity_6[0]='0';
  entity_3 = (char*)malloc(93*sizeof(char));
  entity_3[0]='0';
  entity_5 = (char*)malloc(90*sizeof(char));
  entity_5[0]='0';
  memset(entity_2, 'C', 22-1);
  entity_2[22-1]='0';
  entity_4 = (char*)malloc(72*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_2);
}