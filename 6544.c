void fun()
{
  char* entity_8;
  char entity_2[64] = "";
  entity_2 = NULL;
  entity_8 = (char*)malloc(87*sizeof(char));
  entity_8[87-1]='';
  memset(entity_2, 'b', 64-1);
  entity_2[64-1]='';
  strcpy(entity_8, entity_2);
}