void fun()
{
  int entity_8 = 3;
  char entity_3[71] = "";
  entity_3 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  memset(entity_3, 's', 71-1);
  entity_3[71-1]='';
  strcpy(entity_0, entity_3);
}