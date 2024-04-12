void fun()
{
  int entity_0 = 68;
  char* entity_8;
  char entity_6 = 'j';
  char* entity_7;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  entity_7 = (char*)malloc(60*sizeof(char));
  entity_7[60-1]='';
  memset(entity_1, 'y', entity_0-1);
  entity_1[entity_0-1]='';
  entity_8 = (char*)malloc(4*sizeof(char));
  entity_8[4-1]='';
  entity_0 = 4;
  memcpy(entity_8, entity_1, entity_0*sizeof(char));
}