void fun()
{
  int entity_6 = 90;
  char* entity_3;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  entity_3 = (char*)malloc(88*sizeof(char));
  entity_3[88-1]='';
  memset(entity_0, 'O', entity_6-1);
  entity_0[entity_6-1]='';
  strcpy(entity_3, entity_0);
}