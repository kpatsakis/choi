void fun()
{
  int entity_4 = 76;
  char* entity_8;
  char entity_2[32] = "";
  entity_2 = NULL;
  memset(entity_2, 'G', 32-1);
  entity_2[32-1]='';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  strcpy(entity_8, entity_2);
}