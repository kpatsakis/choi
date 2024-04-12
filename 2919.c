void fun()
{
  char* entity_3;
  char* entity_5;
  char entity_1[71] = "";
  entity_1 = NULL;
  entity_5 = (char*)malloc(26*sizeof(char));
  entity_5[26-1]='';
  memset(entity_1, 'V', 71-1);
  entity_1[71-1]='';
  entity_3 = (char*)malloc(26*sizeof(char));
  entity_3[26-1]='';
  memcpy(entity_5, entity_1, 71*sizeof(char));
}