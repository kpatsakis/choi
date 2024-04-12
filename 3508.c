void fun()
{
  char* entity_7;
  char entity_8[40] = "";
  entity_8 = NULL;
  memset(entity_8, 'Q', 40-1);
  entity_8[40-1]='';
  entity_7 = (char*)malloc(70*sizeof(char));
  entity_7[70-1]='';
  strcpy(entity_7, entity_8);
}