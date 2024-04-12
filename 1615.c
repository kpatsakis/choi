void fun()
{
  char entity_9[15] = "";
  entity_9 = NULL;
  char entity_3 = 'e';
  char* entity_4;
  memset(entity_9, 'I', 15-1);
  entity_9[15-1]='';
  entity_4 = (char*)malloc(61*sizeof(char));
  entity_4[61-1]='';
  strcpy(entity_4, entity_9);
}