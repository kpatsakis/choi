void fun()
{
  char entity_8[78] = "";
  entity_8 = NULL;
  char* entity_5;
  memset(entity_8, 'B', 78-1);
  entity_8[78-1]='';
  entity_5 = (char*)malloc(44*sizeof(char));
  entity_5[44-1]='';
  strcpy(entity_5, entity_8);
}