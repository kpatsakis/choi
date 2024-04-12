void fun()
{
  int entity_4 = 2;
  char* entity_0;
  char entity_1[17] = "";
  entity_1 = NULL;
  char* entity_6;
  entity_0 = (char*)malloc(44*sizeof(char));
  entity_0[44-1]='';
  entity_6 = (char*)malloc(48*sizeof(char));
  entity_6[48-1]='';
  memset(entity_1, 'F', 17-1);
  entity_1[17-1]='';
  strcpy(entity_6, entity_1);
}