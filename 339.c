void fun()
{
  int entity_7 = 31;
  char* entity_0;
  char entity_4[47] = "";
  entity_4 = NULL;
  char* entity_5;
  char entity_1[83] = "";
  entity_1 = NULL;
  memset(entity_1, 'F', 83-1);
  entity_1[83-1]='';
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  entity_0 = (char*)malloc(91*sizeof(char));
  entity_0[91-1]='';
  memset(entity_4, 'e', 47-1);
  entity_4[47-1]='';
  memcpy(entity_5, entity_4, 47*sizeof(char));
}