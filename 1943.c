void fun()
{
  char* entity_6;
  char entity_5[82] = "";
  entity_5 = NULL;
  entity_6 = (char*)malloc(30*sizeof(char));
  entity_6[30-1]='';
  memset(entity_5, 'V', 82-1);
  entity_5[82-1]='';
  strcpy(entity_6, entity_5);
}