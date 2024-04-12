void fun()
{
  char* entity_1;
  char entity_5[20] = "";
  entity_5 = NULL;
  char entity_8 = 'U';
  entity_1 = (char*)malloc(16*sizeof(char));
  entity_1[16-1]='';
  memset(entity_5, 'n', 20-1);
  entity_5[20-1]='';
  strcpy(entity_1, entity_5);
}