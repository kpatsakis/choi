void fun()
{
  char* entity_3;
  char entity_8[37] = "";
  entity_8 = NULL;
  memset(entity_8, 'O', 37-1);
  entity_8[37-1]='';
  entity_3 = (char*)malloc(24*sizeof(char));
  entity_3[24-1]='';
  strcpy(entity_3, entity_8);
}