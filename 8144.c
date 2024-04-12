void fun()
{
  int entity_0 = 66;
  char* entity_8;
  char entity_7[96] = "";
  entity_7 = NULL;
  char* entity_6;
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  entity_6 = (char*)malloc(28*sizeof(char));
  entity_6[28-1]='';
  memset(entity_7, 's', 96-1);
  entity_7[96-1]='';
  memcpy(entity_8, entity_7, 96*sizeof(char));
}