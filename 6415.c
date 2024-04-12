void fun()
{
  char entity_2 = 'B';
  char* entity_4;
  char entity_9[83] = "";
  entity_9 = NULL;
  entity_4 = (char*)malloc(35*sizeof(char));
  entity_4[35-1]='';
  memset(entity_9, 'w', 83-1);
  entity_9[83-1]='';
  strcpy(entity_4, entity_9);
}