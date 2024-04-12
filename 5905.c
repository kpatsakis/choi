void fun()
{
  char entity_7[68] = "";
  entity_7 = NULL;
  char* entity_0;
  memset(entity_7, 'I', 68-1);
  entity_7[68-1]='';
  entity_0 = (char*)malloc(73*sizeof(char));
  entity_0[73-1]='';
  strcpy(entity_0, entity_7);
}