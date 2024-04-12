void fun()
{
  int entity_0 = 74;
  entity_0 = 45;
  char entity_2[32] = "";
  entity_2 = NULL;
  char entity_6 = 'p';
  char* entity_1;
  memset(entity_2, 'F', 32-1);
  entity_2[32-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  strcpy(entity_1, entity_2);
}