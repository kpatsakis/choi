void fun()
{
  char* entity_7;
  char entity_4[91] = "";
  entity_4 = NULL;
  char* entity_5;
  char entity_1[98] = "";
  entity_1 = NULL;
  char entity_3[26] = "";
  entity_3 = NULL;
  entity_5 = (char*)malloc(69*sizeof(char));
  entity_5[69-1]='';
  entity_7 = (char*)malloc(53*sizeof(char));
  entity_7[53-1]='';
  memset(entity_3, 'd', 26-1);
  entity_3[26-1]='';
  memset(entity_4, 'R', 91-1);
  entity_4[91-1]='';
  memset(entity_1, 'I', 98-1);
  entity_1[98-1]='';
  memcpy(entity_7, entity_4, 91*sizeof(char));
}