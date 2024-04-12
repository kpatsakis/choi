void fun()
{
  int entity_3 = 38;
  entity_3 = 41;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char* entity_0;
  char* entity_5;
  memset(entity_6, 'u', entity_3-1);
  entity_6[entity_3-1]='';
  entity_0 = (char*)malloc(68*sizeof(char));
  entity_0[68-1]='';
  entity_5 = (char*)malloc(14*sizeof(char));
  entity_5[14-1]='';
  memcpy(entity_0, entity_6, entity_3*sizeof(char));
}