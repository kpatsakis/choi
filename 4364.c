void fun()
{
  int entity_6 = 44;
  char* entity_1;
  char entity_0[78] = "";
  entity_0 = NULL;
  memset(entity_0, 'i', 78-1);
  entity_0[78-1]='';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  entity_6 = 31;
  strcpy(entity_1, entity_0);
}