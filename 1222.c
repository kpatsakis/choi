void fun()
{
  char entity_4 = 'q';
  char* entity_0;
  char entity_6[91] = "";
  entity_6 = NULL;
  char* entity_5;
  char entity_1[67] = "";
  entity_1 = NULL;
  memset(entity_6, 'i', 91-1);
  entity_6[91-1]='';
  entity_5 = (char*)malloc(50*sizeof(char));
  entity_5[50-1]='';
  entity_0 = (char*)malloc(17*sizeof(char));
  entity_0[17-1]='';
  memset(entity_1, 'B', 67-1);
  entity_1[67-1]='';
  memcpy(entity_0, entity_6, 91*sizeof(char));
}