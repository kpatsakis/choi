void fun()
{
  int entity_3 = 93;
  char* entity_5;
  char entity_8[16] = "";
  entity_8 = NULL;
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memset(entity_8, 'u', 16-1);
  entity_8[16-1]='';
  strcpy(entity_5, entity_8);
}