void fun()
{
  char* entity_9;
  char entity_1[77] = "";
  entity_1 = NULL;
  char entity_7 = 'F';
  memset(entity_1, 'a', 77-1);
  entity_1[77-1]='';
  entity_9 = (char*)malloc(12*sizeof(char));
  entity_9[12-1]='';
  strcpy(entity_9, entity_1);
}