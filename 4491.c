void fun()
{
  int entity_8 = 29;
  char entity_0[43] = "";
  entity_0 = NULL;
  char entity_6[69] = "";
  entity_6 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(60*sizeof(char));
  entity_2[60-1]='';
  memset(entity_0, 'Y', 43-1);
  entity_0[43-1]='';
  memset(entity_6, 'Y', 69-1);
  entity_6[69-1]='';
  strcpy(entity_2, entity_0);
}