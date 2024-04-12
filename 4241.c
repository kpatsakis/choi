void fun()
{
  char entity_4[78] = "";
  entity_4 = NULL;
  char* entity_7;
  char entity_6[67] = "";
  entity_6 = NULL;
  entity_7 = (char*)malloc(26*sizeof(char));
  entity_7[26-1]='';
  memset(entity_4, 'G', 78-1);
  entity_4[78-1]='';
  memset(entity_6, 'q', 67-1);
  entity_6[67-1]='';
  strcpy(entity_7, entity_6);
}