void fun()
{
  int entity_0 = 36;
  entity_0 = 66;
  char* entity_8;
  char* entity_3;
  char entity_6[28] = "";
  entity_6 = NULL;
  memset(entity_6, 'b', 28-1);
  entity_6[28-1]='';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  entity_3 = (char*)malloc(96*sizeof(char));
  entity_3[96-1]='';
  memcpy(entity_8, entity_6, 28*sizeof(char));
}