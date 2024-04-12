void fun()
{
  char* entity_7;
  char entity_5[28] = "";
  entity_5 = NULL;
  memset(entity_5, 'R', 28-1);
  entity_5[28-1]='';
  entity_7 = (char*)malloc(75*sizeof(char));
  entity_7[75-1]='';
  strcpy(entity_7, entity_5);
}