void fun()
{
  int entity_5 = 5;
  char entity_7[21] = "";
  entity_7 = NULL;
  char* entity_8;
  char entity_6[38] = "";
  entity_6 = NULL;
  memset(entity_6, 'u', 38-1);
  entity_6[38-1]='';
  memset(entity_7, 'Q', 21-1);
  entity_7[21-1]='';
  entity_8 = (char*)malloc(38*sizeof(char));
  entity_8[38-1]='';
  strcpy(entity_8, entity_6);
}