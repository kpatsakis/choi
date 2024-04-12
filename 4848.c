void fun()
{
  char entity_3[53] = "";
  entity_3 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(2*sizeof(char));
  entity_9[2-1]='';
  memset(entity_3, 'I', 53-1);
  entity_3[53-1]='';
  strcpy(entity_9, entity_3);
}