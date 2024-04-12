void fun()
{
  int entity_8 = 26;
  int entity_5 = 23;
  char* entity_3;
  char* entity_6;
  char entity_4[93] = "";
  entity_4 = NULL;
  entity_6 = (char*)malloc(47*sizeof(char));
  entity_6[47-1]='';
  entity_3 = (char*)malloc(31*sizeof(char));
  entity_3[31-1]='';
  memset(entity_4, 'N', 93-1);
  entity_4[93-1]='';
  strcpy(entity_6, entity_4);
}