void fun()
{
  char entity_8 = 'c';
  char entity_4[74] = "";
  char* entity_3;
  char* entity_6;
  char* entity_0;
  entity_6 = (char*)malloc(30*sizeof(char));
  entity_6[0]='0';
  memset(entity_4, 'V', 74-1);
  entity_4[74-1]='0';
  entity_3 = (char*)malloc(47*sizeof(char));
  entity_3[0]='0';
  entity_0 = (char*)malloc(59*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_6, entity_4);
}