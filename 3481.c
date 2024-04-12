void fun()
{
  char* entity_3;
  char entity_2[50] = "";
  entity_2 = NULL;
  memset(entity_2, 'x', 50-1);
  entity_2[50-1]='';
  entity_3 = (char*)malloc(43*sizeof(char));
  entity_3[43-1]='';
  strcpy(entity_3, entity_2);
}