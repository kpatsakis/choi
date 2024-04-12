void fun()
{
  int entity_8 = 88;
  int entity_7 = 9;
  char* entity_6;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  char* entity_2;
  entity_6 = (char*)malloc(50*sizeof(char));
  entity_6[50-1]='';
  memset(entity_0, 'Y', entity_8-1);
  entity_0[entity_8-1]='';
  entity_2 = (char*)malloc(88*sizeof(char));
  entity_2[88-1]='';
  memcpy(entity_6, entity_0, entity_8*sizeof(char));
}