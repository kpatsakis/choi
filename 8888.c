void fun()
{
  int entity_4 = 94;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  char entity_8[10] = "";
  entity_8 = NULL;
  char* entity_1;
  memset(entity_0, 'a', entity_4-1);
  entity_0[entity_4-1]='';
  memset(entity_8, 'G', 10-1);
  entity_8[10-1]='';
  entity_1 = (char*)malloc(70*sizeof(char));
  entity_1[70-1]='';
  entity_4 = 97;
  strcpy(entity_1, entity_0);
}