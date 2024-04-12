void fun()
{
  int entity_3 = 42;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char* entity_0;
  char* entity_7;
  char* entity_1;
  memset(entity_8, 'B', entity_3-1);
  entity_8[entity_3-1]='';
  entity_7 = (char*)malloc(27*sizeof(char));
  entity_7[27-1]='';
  entity_0 = (char*)malloc(98*sizeof(char));
  entity_0[98-1]='';
  entity_1 = (char*)malloc(43*sizeof(char));
  entity_1[43-1]='';
  strcpy(entity_0, entity_8);
}