void fun()
{
  int entity_7 = 38;
  entity_7 = 77;
  char entity_2[66] = "";
  entity_2 = NULL;
  char* entity_0;
  memset(entity_2, 'S', 66-1);
  entity_2[66-1]='';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  strcpy(entity_0, entity_2);
}