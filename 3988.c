void fun()
{
  char entity_0 = 'm';
  char* entity_4;
  char entity_3[46] = "";
  entity_3 = NULL;
  entity_4 = (char*)malloc(96*sizeof(char));
  entity_4[96-1]='';
  memset(entity_3, 'r', 46-1);
  entity_3[46-1]='';
  strcpy(entity_4, entity_3);
}