void fun()
{
  char* entity_2;
  char entity_9[44] = "";
  entity_9 = NULL;
  entity_2 = (char*)malloc(100*sizeof(char));
  entity_2[100-1]='';
  memset(entity_9, 'B', 44-1);
  entity_9[44-1]='';
  strcpy(entity_2, entity_9);
}