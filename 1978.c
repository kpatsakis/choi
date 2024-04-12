void fun()
{
  char entity_6[56] = "";
  entity_6 = NULL;
  char* entity_7;
  char entity_3[7] = "";
  entity_3 = NULL;
  char* entity_9;
  entity_7 = (char*)malloc(12*sizeof(char));
  entity_7[12-1]='';
  memset(entity_3, 'X', 7-1);
  entity_3[7-1]='';
  entity_9 = (char*)malloc(11*sizeof(char));
  entity_9[11-1]='';
  memset(entity_6, 'l', 56-1);
  entity_6[56-1]='';
  memcpy(entity_7, entity_3, 7*sizeof(char));
}