void fun()
{
  char entity_6[86] = "";
  entity_6 = NULL;
  char* entity_1;
  memset(entity_6, 'j', 86-1);
  entity_6[86-1]='';
  entity_1 = (char*)malloc(26*sizeof(char));
  entity_1[26-1]='';
  strcpy(entity_1, entity_6);
}