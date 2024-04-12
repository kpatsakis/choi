void fun()
{
  int entity_2 = 13;
  entity_2 = 13;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  char entity_1[20] = "";
  entity_1 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(19*sizeof(char));
  entity_3[19-1]='';
  memset(entity_0, 'h', entity_2-1);
  entity_0[entity_2-1]='';
  memset(entity_1, 'z', 20-1);
  entity_1[20-1]='';
  strcpy(entity_3, entity_0);
}