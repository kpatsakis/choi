void fun()
{
  char* entity_9;
  char entity_5[58] = "";
  entity_5 = NULL;
  char* entity_7;
  entity_9 = (char*)malloc(82*sizeof(char));
  entity_9[82-1]='';
  memset(entity_5, 'x', 58-1);
  entity_5[58-1]='';
  entity_7 = (char*)malloc(20*sizeof(char));
  entity_7[20-1]='';
  strcpy(entity_7, entity_5);
}