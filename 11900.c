void fun()
{
  char entity_4[34] = "";
  char* entity_3;
  char* entity_6;
  memset(entity_4, 'd', 34-1);
  entity_4[34-1]='0';
  entity_3 = (char*)malloc(34*sizeof(char));
  entity_3[0]='0';
  entity_6 = (char*)malloc(74*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_4);
}