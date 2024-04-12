void fun()
{
  int entity_7 = 61;
  char entity_3[7] = "";
  entity_3 = NULL;
  char* entity_1;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  memset(entity_0, 'z', entity_7-1);
  entity_0[entity_7-1]='';
  entity_1 = (char*)malloc(59*sizeof(char));
  entity_1[59-1]='';
  memset(entity_3, 'I', 7-1);
  entity_3[7-1]='';
  entity_7 = 36;
  strcpy(entity_1, entity_0);
}