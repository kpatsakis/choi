void fun()
{
  char* entity_2;
  char entity_6[57] = "";
  entity_6 = NULL;
  entity_2 = (char*)malloc(93*sizeof(char));
  entity_2[93-1]='';
  memset(entity_6, 'S', 57-1);
  entity_6[57-1]='';
  strcpy(entity_2, entity_6);
}