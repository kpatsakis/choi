void fun()
{
  int entity_3 = 68;
  char entity_7 = 'z';
  char* entity_0;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  memset(entity_8, 'E', entity_3-1);
  entity_8[entity_3-1]='';
  entity_0 = (char*)malloc(70*sizeof(char));
  entity_0[70-1]='';
  strcpy(entity_0, entity_8);
}