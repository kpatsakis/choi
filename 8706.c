void fun()
{
  char* entity_1;
  char entity_6[56] = "";
  entity_6 = NULL;
  entity_1 = (char*)malloc(7*sizeof(char));
  entity_1[7-1]='';
  memset(entity_6, 'f', 56-1);
  entity_6[56-1]='';
  strcpy(entity_1, entity_6);
}