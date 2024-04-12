void fun()
{
  char entity_5[4] = "";
  entity_5 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(2*sizeof(char));
  entity_2[2-1]='';
  memset(entity_5, 'S', 4-1);
  entity_5[4-1]='';
  strcpy(entity_2, entity_5);
}