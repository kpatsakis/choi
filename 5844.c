void fun()
{
  int entity_7 = 82;
  char entity_0[38] = "";
  entity_0 = NULL;
  char* entity_3;
  char entity_6[26] = "";
  entity_6 = NULL;
  char entity_5 = 'r';
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[entity_7-1]='';
  memset(entity_6, 'T', 26-1);
  entity_6[26-1]='';
  memset(entity_0, 'O', 38-1);
  entity_0[38-1]='';
  strcpy(entity_3, entity_6);
}