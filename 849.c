void fun()
{
  int entity_4 = 36;
  char* entity_0;
  char entity_7[43] = "";
  entity_7 = NULL;
  memset(entity_7, 's', 43-1);
  entity_7[43-1]='';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[entity_4-1]='';
  strcpy(entity_0, entity_7);
}