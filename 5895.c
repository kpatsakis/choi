void fun()
{
  int entity_6 = 44;
  char* entity_2;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  memset(entity_0, 'h', entity_6-1);
  entity_0[entity_6-1]='';
  entity_2 = (char*)malloc(1*sizeof(char));
  entity_2[1-1]='';
  strcpy(entity_2, entity_0);
}