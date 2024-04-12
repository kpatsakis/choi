void fun()
{
  int entity_7 = 11;
  int entity_1 = 3;
  char* entity_0;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char entity_3[45] = "";
  entity_3 = NULL;
  entity_0 = (char*)malloc(70*sizeof(char));
  entity_0[70-1]='';
  memset(entity_3, 'X', 45-1);
  entity_3[45-1]='';
  memset(entity_5, 'q', entity_1-1);
  entity_5[entity_1-1]='';
  memcpy(entity_0, entity_5, entity_1*sizeof(char));
}