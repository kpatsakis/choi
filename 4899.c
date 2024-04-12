void fun()
{
  char* entity_7;
  char entity_8[88] = "";
  entity_8 = NULL;
  entity_7 = (char*)malloc(34*sizeof(char));
  entity_7[34-1]='';
  memset(entity_8, 'A', 88-1);
  entity_8[88-1]='';
  strcpy(entity_7, entity_8);
}