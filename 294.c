void fun()
{
  char* entity_2;
  char entity_6[34] = "";
  entity_6 = NULL;
  memset(entity_6, 'v', 34-1);
  entity_6[34-1]='';
  entity_2 = (char*)malloc(65*sizeof(char));
  entity_2[65-1]='';
  strcpy(entity_2, entity_6);
}