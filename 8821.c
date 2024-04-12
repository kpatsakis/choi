void fun()
{
  int entity_2 = 77;
  char entity_7[96] = "";
  entity_7 = NULL;
  char* entity_4;
  memset(entity_7, 'Y', 96-1);
  entity_7[96-1]='';
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  strcpy(entity_4, entity_7);
}