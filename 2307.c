void fun()
{
  int entity_0 = 24;
  char entity_8[10] = "";
  entity_8 = NULL;
  char entity_3[14] = "";
  entity_3 = NULL;
  char* entity_1;
  memset(entity_8, 'D', 10-1);
  entity_8[10-1]='';
  memset(entity_3, 'Q', 14-1);
  entity_3[14-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  entity_0 = 23;
  strcpy(entity_1, entity_3);
}