void fun()
{
  int entity_0 = 89;
  int entity_6 = 92;
  char entity_1[53] = "";
  entity_1 = NULL;
  char* entity_3;
  memset(entity_1, 'f', 53-1);
  entity_1[53-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  entity_6 = 52;
  strcpy(entity_3, entity_1);
}