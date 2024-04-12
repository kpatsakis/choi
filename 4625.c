void fun()
{
  char* entity_8;
  char entity_1[19] = "";
  entity_1 = NULL;
  char entity_7[67] = "";
  entity_7 = NULL;
  char entity_2[60] = "";
  entity_2 = NULL;
  memset(entity_1, 'F', 19-1);
  entity_1[19-1]='';
  memset(entity_2, 'E', 60-1);
  entity_2[60-1]='';
  memset(entity_7, 'J', 67-1);
  entity_7[67-1]='';
  entity_8 = (char*)malloc(86*sizeof(char));
  entity_8[86-1]='';
  memcpy(entity_8, entity_1, 19*sizeof(char));
}