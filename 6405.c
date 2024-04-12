void fun()
{
  char* entity_0;
  char entity_7[80] = "";
  entity_7 = NULL;
  entity_0 = (char*)malloc(13*sizeof(char));
  entity_0[13-1]='';
  memset(entity_7, 'S', 80-1);
  entity_7[80-1]='';
  strcpy(entity_0, entity_7);
}