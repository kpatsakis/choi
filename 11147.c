void fun()
{
  char* entity_6;
  char* entity_2;
  char entity_5[23] = "";
  char* entity_7;
  memset(entity_5, 't', 23-1);
  entity_5[23-1]='0';
  entity_2 = (char*)malloc(71*sizeof(char));
  entity_2[0]='0';
  entity_7 = (char*)malloc(3*sizeof(char));
  entity_7[0]='0';
  entity_6 = (char*)malloc(8*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_7, entity_5);
}