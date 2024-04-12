void fun()
{
  char* entity_1;
  char entity_4[65] = "";
  entity_4 = NULL;
  char entity_6 = 'm';
  char entity_3[42] = "";
  entity_3 = NULL;
  char entity_7[10] = "";
  entity_7 = NULL;
  memset(entity_7, 'a', 10-1);
  entity_7[10-1]='';
  memset(entity_3, 'd', 42-1);
  entity_3[42-1]='';
  entity_1 = (char*)malloc(83*sizeof(char));
  entity_1[83-1]='';
  memset(entity_4, 'h', 65-1);
  entity_4[65-1]='';
  memcpy(entity_1, entity_3, 42*sizeof(char));
}