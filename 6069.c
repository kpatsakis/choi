void fun()
{
  int entity_1 = 61;
  char* entity_5;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char entity_6 = 'p';
  char* entity_3;
  entity_5 = (char*)malloc(30*sizeof(char));
  entity_5[30-1]='';
  memset(entity_0, 'o', entity_1-1);
  entity_0[entity_1-1]='';
  entity_3 = (char*)malloc(55*sizeof(char));
  entity_3[55-1]='';
  memcpy(entity_3, entity_0, entity_1*sizeof(char));
}