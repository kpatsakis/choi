void fun()
{
  char* entity_9;
  char entity_8[32] = "";
  entity_8 = NULL;
  entity_9 = (char*)malloc(14*sizeof(char));
  entity_9[14-1]='';
  memset(entity_8, 'h', 32-1);
  entity_8[32-1]='';
  strcpy(entity_9, entity_8);
}