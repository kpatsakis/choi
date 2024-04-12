void fun()
{
  int entity_5 = 21;
  char* entity_2;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  char entity_8[8] = "";
  entity_8 = NULL;
  char* entity_7;
  entity_2 = (char*)malloc(42*sizeof(char));
  entity_2[42-1]='';
  entity_7 = (char*)malloc(43*sizeof(char));
  entity_7[43-1]='';
  memset(entity_0, 'b', entity_5-1);
  entity_0[entity_5-1]='';
  memset(entity_8, 'q', 8-1);
  entity_8[8-1]='';
  strcpy(entity_7, entity_0);
}