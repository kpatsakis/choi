void fun()
{
  int entity_2 = 66;
  entity_2 = 28;
  char* entity_0;
  char entity_6[59] = "";
  entity_6 = NULL;
  memset(entity_6, 'Q', 59-1);
  entity_6[59-1]='';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  strcpy(entity_0, entity_6);
}