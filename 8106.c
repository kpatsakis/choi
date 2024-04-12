void fun()
{
  int entity_8 = 51;
  char entity_3[92] = "";
  entity_3 = NULL;
  char* entity_0;
  memset(entity_3, 'U', 92-1);
  entity_3[92-1]='';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  strcpy(entity_0, entity_3);
}