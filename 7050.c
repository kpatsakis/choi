void fun()
{
  char* entity_3;
  char entity_1[57] = "";
  entity_1 = NULL;
  memset(entity_1, 'U', 57-1);
  entity_1[57-1]='';
  entity_3 = (char*)malloc(90*sizeof(char));
  entity_3[90-1]='';
  strcpy(entity_3, entity_1);
}