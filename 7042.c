void fun()
{
  char* entity_7;
  char entity_3[61] = "";
  entity_3 = NULL;
  char entity_6[20] = "";
  entity_6 = NULL;
  char entity_1[91] = "";
  entity_1 = NULL;
  char entity_5[76] = "";
  entity_5 = NULL;
  memset(entity_3, 'r', 61-1);
  entity_3[61-1]='';
  entity_7 = (char*)malloc(42*sizeof(char));
  entity_7[42-1]='';
  memset(entity_6, 'L', 20-1);
  entity_6[20-1]='';
  memset(entity_5, 's', 76-1);
  entity_5[76-1]='';
  memset(entity_1, 'h', 91-1);
  entity_1[91-1]='';
  strcpy(entity_7, entity_5);
}