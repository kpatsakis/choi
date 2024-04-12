void fun()
{
  int entity_9 = 57;
  int entity_7 = 53;
  char entity_0[99] = "";
  entity_0 = NULL;
  char* entity_8;
  char entity_6[0] = "";
  entity_6 = NULL;
  char* entity_4;
  memset(entity_6, 'x', 0-1);
  entity_6[0-1]='';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  memset(entity_0, 'F', 99-1);
  entity_0[99-1]='';
  entity_4 = (char*)malloc(35*sizeof(char));
  entity_4[35-1]='';
  memcpy(entity_8, entity_0, 99*sizeof(char));
}