void fun()
{
  int entity_4 = 65;
  entity_4 = 36;
  char entity_1[19] = "";
  entity_1 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  memset(entity_1, 's', 19-1);
  entity_1[19-1]='';
  strcpy(entity_3, entity_1);
}