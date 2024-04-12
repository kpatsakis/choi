void fun()
{
  char* entity_7;
  char entity_3[86] = "";
  entity_3 = NULL;
  entity_7 = (char*)malloc(3*sizeof(char));
  entity_7[3-1]='';
  memset(entity_3, 'k', 86-1);
  entity_3[86-1]='';
  strcpy(entity_7, entity_3);
}