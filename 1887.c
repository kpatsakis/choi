void fun()
{
  char* entity_9;
  char entity_8[29] = "";
  entity_8 = NULL;
  memset(entity_8, 'E', 29-1);
  entity_8[29-1]='';
  entity_9 = (char*)malloc(25*sizeof(char));
  entity_9[25-1]='';
  strcpy(entity_9, entity_8);
}