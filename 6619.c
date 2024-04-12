void fun()
{
  char entity_3[15] = "";
  entity_3 = NULL;
  char* entity_8;
  memset(entity_3, 'f', 15-1);
  entity_3[15-1]='';
  entity_8 = (char*)malloc(13*sizeof(char));
  entity_8[13-1]='';
  strcpy(entity_8, entity_3);
}