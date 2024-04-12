void fun()
{
  char entity_0 = 'o';
  char entity_5[95] = "";
  entity_5 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(30*sizeof(char));
  entity_2[30-1]='';
  memset(entity_5, 'R', 95-1);
  entity_5[95-1]='';
  strcpy(entity_2, entity_5);
}