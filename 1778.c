void fun()
{
  int entity_6 = 7;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char* entity_8;
  char* entity_0;
  entity_0 = (char*)malloc(3*sizeof(char));
  entity_0[3-1]='';
  memset(entity_5, 'y', entity_6-1);
  entity_5[entity_6-1]='';
  entity_8 = (char*)malloc(58*sizeof(char));
  entity_8[58-1]='';
  memcpy(entity_0, entity_5, entity_6*sizeof(char));
}