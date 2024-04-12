void fun()
{
  int entity_3 = 94;
  entity_3 = 13;
  char* entity_0;
  char* entity_8;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  entity_8 = (char*)malloc(35*sizeof(char));
  entity_8[35-1]='';
  memset(entity_5, 'Q', entity_3-1);
  entity_5[entity_3-1]='';
  entity_0 = (char*)malloc(45*sizeof(char));
  entity_0[45-1]='';
  memcpy(entity_0, entity_5, entity_3*sizeof(char));
}