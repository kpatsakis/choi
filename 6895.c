void fun()
{
  char entity_6[48] = "";
  entity_6 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(14*sizeof(char));
  entity_2[14-1]='';
  memset(entity_6, 'l', 48-1);
  entity_6[48-1]='';
  strcpy(entity_2, entity_6);
}