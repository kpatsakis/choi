void fun()
{
  char entity_7[5] = "";
  entity_7 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(57*sizeof(char));
  entity_6[57-1]='';
  memset(entity_7, 'U', 5-1);
  entity_7[5-1]='';
  strcpy(entity_6, entity_7);
}