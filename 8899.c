void fun()
{
  char entity_3[48] = "";
  entity_3 = NULL;
  char* entity_0;
  memset(entity_3, 'z', 48-1);
  entity_3[48-1]='';
  entity_0 = (char*)malloc(43*sizeof(char));
  entity_0[43-1]='';
  strcpy(entity_0, entity_3);
}