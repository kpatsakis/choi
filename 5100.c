void fun()
{
  int entity_1 = 95;
  char* entity_3;
  char entity_0[47] = "";
  entity_0 = NULL;
  memset(entity_0, 'T', 47-1);
  entity_0[47-1]='';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  entity_1 = 4;
  strcpy(entity_3, entity_0);
}