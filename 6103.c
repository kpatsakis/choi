void fun()
{
  char entity_1[53] = "";
  entity_1 = NULL;
  char* entity_9;
  char entity_6 = 'e';
  memset(entity_1, 'k', 53-1);
  entity_1[53-1]='';
  entity_9 = (char*)malloc(48*sizeof(char));
  entity_9[48-1]='';
  strcpy(entity_9, entity_1);
}