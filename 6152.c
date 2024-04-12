void fun()
{
  char* entity_2;
  char entity_6[28] = "";
  entity_6 = NULL;
  char entity_1 = 'X';
  char entity_4[91] = "";
  entity_4 = NULL;
  char entity_5 = 'F';
  memset(entity_6, 'G', 28-1);
  entity_6[28-1]='';
  memset(entity_4, 'H', 91-1);
  entity_4[91-1]='';
  entity_2 = (char*)malloc(18*sizeof(char));
  entity_2[18-1]='';
  memcpy(entity_2, entity_6, 28*sizeof(char));
}