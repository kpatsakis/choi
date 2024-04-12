void fun()
{
  int entity_7 = 42;
  int entity_8 = 41;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  char* entity_5;
  char* entity_0;
  memset(entity_3, 'L', entity_7-1);
  entity_3[entity_7-1]='';
  entity_0 = (char*)malloc(30*sizeof(char));
  entity_0[30-1]='';
  entity_5 = (char*)malloc(78*sizeof(char));
  entity_5[78-1]='';
  memcpy(entity_5, entity_3, entity_7*sizeof(char));
}