void fun()
{
  char* entity_2;
  char entity_6[19] = "";
  entity_6 = NULL;
  entity_2 = (char*)malloc(56*sizeof(char));
  entity_2[56-1]='';
  memset(entity_6, 'k', 19-1);
  entity_6[19-1]='';
  strcpy(entity_2, entity_6);
}