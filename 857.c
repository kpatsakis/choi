void fun()
{
  char entity_7[80] = "";
  entity_7 = NULL;
  char entity_1[86] = "";
  entity_1 = NULL;
  char* entity_9;
  char* entity_8;
  memset(entity_1, 'w', 86-1);
  entity_1[86-1]='';
  entity_9 = (char*)malloc(60*sizeof(char));
  entity_9[60-1]='';
  entity_8 = (char*)malloc(37*sizeof(char));
  entity_8[37-1]='';
  memset(entity_7, 'k', 80-1);
  entity_7[80-1]='';
  memcpy(entity_8, entity_1, 86*sizeof(char));
}