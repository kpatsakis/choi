void fun()
{
  int entity_1 = 76;
  char entity_8[47] = "";
  entity_8 = NULL;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char* entity_0;
  memset(entity_3, 'h', entity_1-1);
  entity_3[entity_1-1]='';
  entity_0 = (char*)malloc(16*sizeof(char));
  entity_0[16-1]='';
  memset(entity_8, 'u', 47-1);
  entity_8[47-1]='';
  strcpy(entity_0, entity_3);
}