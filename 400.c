void fun()
{
  char* entity_2;
  char entity_0[30] = "";
  entity_0 = NULL;
  memset(entity_0, 'Z', 30-1);
  entity_0[30-1]='';
  entity_2 = (char*)malloc(87*sizeof(char));
  entity_2[87-1]='';
  memcpy(entity_2, entity_0, 30*sizeof(char));
}