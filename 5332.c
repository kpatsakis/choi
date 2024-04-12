void fun()
{
  char entity_6[84] = "";
  entity_6 = NULL;
  char* entity_3;
  memset(entity_6, 'A', 84-1);
  entity_6[84-1]='';
  entity_3 = (char*)malloc(80*sizeof(char));
  entity_3[80-1]='';
  strcpy(entity_3, entity_6);
}