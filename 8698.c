void fun()
{
  char* entity_6;
  char entity_7[95] = "";
  entity_7 = NULL;
  memset(entity_7, 'S', 95-1);
  entity_7[95-1]='';
  entity_6 = (char*)malloc(23*sizeof(char));
  entity_6[23-1]='';
  strcpy(entity_6, entity_7);
}