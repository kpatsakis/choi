void fun()
{
  char* entity_5;
  char* entity_6;
  char entity_7[49] = "";
  char* entity_4;
  memset(entity_7, 'P', 49-1);
  entity_7[49-1]='0';
  entity_6 = (char*)malloc(59*sizeof(char));
  entity_6[0]='0';
  entity_5 = (char*)malloc(42*sizeof(char));
  entity_5[0]='0';
  entity_4 = (char*)malloc(36*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_6, entity_7);
}