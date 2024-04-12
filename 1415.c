void fun()
{
  char* entity_6;
  char* entity_9;
  char entity_1 = 'S';
  char* entity_3;
  char entity_8[80] = "";
  entity_8 = NULL;
  memset(entity_8, 'G', 80-1);
  entity_8[80-1]='';
  entity_9 = (char*)malloc(44*sizeof(char));
  entity_9[44-1]='';
  entity_3 = (char*)malloc(68*sizeof(char));
  entity_3[68-1]='';
  entity_6 = (char*)malloc(23*sizeof(char));
  entity_6[23-1]='';
  strcpy(entity_6, entity_8);
}