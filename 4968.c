void fun()
{
  char entity_9[58] = "";
  entity_9 = NULL;
  char entity_5[66] = "";
  entity_5 = NULL;
  char* entity_2;
  memset(entity_5, 'n', 66-1);
  entity_5[66-1]='';
  memset(entity_9, 's', 58-1);
  entity_9[58-1]='';
  entity_2 = (char*)malloc(2*sizeof(char));
  entity_2[2-1]='';
  strcpy(entity_2, entity_9);
}