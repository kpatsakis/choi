void fun()
{
  char entity_8[29] = "";
  entity_8 = NULL;
  char* entity_6;
  memset(entity_8, 'y', 29-1);
  entity_8[29-1]='';
  entity_6 = (char*)malloc(73*sizeof(char));
  entity_6[73-1]='';
  strcpy(entity_6, entity_8);
}