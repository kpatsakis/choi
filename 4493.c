void fun()
{
  int entity_8 = 53;
  char* entity_3;
  char entity_0 = 'N';
  char entity_5[50] = "";
  entity_5 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(24*sizeof(char));
  entity_4[24-1]='';
  memset(entity_5, 'w', 50-1);
  entity_5[50-1]='';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  strcpy(entity_3, entity_5);
}