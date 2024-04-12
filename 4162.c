void fun()
{
  char* entity_5;
  char entity_3[82] = "";
  entity_3 = NULL;
  entity_5 = (char*)malloc(19*sizeof(char));
  entity_5[19-1]='';
  memset(entity_3, 'X', 82-1);
  entity_3[82-1]='';
  strcpy(entity_5, entity_3);
}