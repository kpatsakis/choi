void fun()
{
  int entity_6 = 51;
  int entity_1 = 41;
  char entity_4[72] = "";
  entity_4 = NULL;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  char* entity_0;
  memset(entity_4, 'a', 72-1);
  entity_4[72-1]='';
  entity_0 = (char*)malloc(91*sizeof(char));
  entity_0[91-1]='';
  memset(entity_2, 'r', entity_6-1);
  entity_2[entity_6-1]='';
  entity_6 = 90;
  strcpy(entity_0, entity_2);
}