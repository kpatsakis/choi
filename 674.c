void fun()
{
  char entity_3[56] = "";
  entity_3 = NULL;
  char* entity_0;
  memset(entity_3, 'V', 56-1);
  entity_3[56-1]='';
  entity_0 = (char*)malloc(13*sizeof(char));
  entity_0[13-1]='';
  strcpy(entity_0, entity_3);
}