void fun()
{
  char entity_4[56] = "";
  entity_4 = NULL;
  char* entity_6;
  memset(entity_4, 'w', 56-1);
  entity_4[56-1]='';
  entity_6 = (char*)malloc(78*sizeof(char));
  entity_6[78-1]='';
  strcpy(entity_6, entity_4);
}