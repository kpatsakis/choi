void fun()
{
  char* entity_8;
  char entity_9[53] = "";
  entity_9 = NULL;
  memset(entity_9, 'd', 53-1);
  entity_9[53-1]='';
  entity_8 = (char*)malloc(38*sizeof(char));
  entity_8[38-1]='';
  strcpy(entity_8, entity_9);
}