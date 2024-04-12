void fun()
{
  int entity_7 = 8;
  char entity_6[4] = "";
  entity_6 = NULL;
  char* entity_0;
  char* entity_2;
  memset(entity_6, 'j', 4-1);
  entity_6[4-1]='';
  entity_0 = (char*)malloc(30*sizeof(char));
  entity_0[30-1]='';
  entity_2 = (char*)malloc(43*sizeof(char));
  entity_2[43-1]='';
  strcpy(entity_0, entity_6);
}