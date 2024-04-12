void fun()
{
  int entity_7 = 68;
  char* entity_4;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  char* entity_5;
  memset(entity_0, 'C', entity_7-1);
  entity_0[entity_7-1]='';
  entity_4 = (char*)malloc(3*sizeof(char));
  entity_4[3-1]='';
  entity_5 = (char*)malloc(70*sizeof(char));
  entity_5[70-1]='';
  memcpy(entity_4, entity_0, entity_7*sizeof(char));
}