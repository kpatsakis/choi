void fun()
{
  int entity_6 = 40;
  int entity_4 = 47;
  char* entity_3;
  char entity_0[19] = "";
  entity_0 = NULL;
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  memset(entity_0, 's', 19-1);
  entity_0[19-1]='';
  entity_6 = 92;
  strcpy(entity_3, entity_0);
}