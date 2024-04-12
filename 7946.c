void fun()
{
  char entity_3 = 'Y';
  char* entity_6;
  char entity_1[39] = "";
  entity_1 = NULL;
  entity_6 = (char*)malloc(86*sizeof(char));
  entity_6[86-1]='';
  memset(entity_1, 'F', 39-1);
  entity_1[39-1]='';
  memcpy(entity_6, entity_1, 39*sizeof(char));
}