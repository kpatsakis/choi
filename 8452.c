void fun()
{
  char entity_8[67] = "";
  entity_8 = NULL;
  char* entity_9;
  char entity_3[93] = "";
  entity_3 = NULL;
  memset(entity_3, 'F', 93-1);
  entity_3[93-1]='';
  memset(entity_8, 'U', 67-1);
  entity_8[67-1]='';
  entity_9 = (char*)malloc(51*sizeof(char));
  entity_9[51-1]='';
  strcpy(entity_9, entity_3);
}