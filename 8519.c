void fun()
{
  char* entity_2;
  char entity_4[57] = "";
  entity_4 = NULL;
  memset(entity_4, 'j', 57-1);
  entity_4[57-1]='';
  entity_2 = (char*)malloc(34*sizeof(char));
  entity_2[34-1]='';
  strcpy(entity_2, entity_4);
}