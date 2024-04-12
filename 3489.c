void fun()
{
  int entity_8 = 76;
  char* entity_2;
  char* entity_7;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  entity_2 = (char*)malloc(95*sizeof(char));
  entity_2[95-1]='';
  entity_7 = (char*)malloc(90*sizeof(char));
  entity_7[90-1]='';
  memset(entity_0, 'U', entity_8-1);
  entity_0[entity_8-1]='';
  memcpy(entity_7, entity_0, entity_8*sizeof(char));
}