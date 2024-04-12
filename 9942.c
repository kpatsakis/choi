void fun()
{
  int entity_5 = 2;
  char entity_8[16] = "";
  entity_8 = NULL;
  char entity_1[71] = "";
  entity_1 = NULL;
  char* entity_2;
  memset(entity_1, 'I', 71-1);
  entity_1[71-1]='';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  memset(entity_8, 'f', 16-1);
  entity_8[16-1]='';
  strcpy(entity_2, entity_1);
}