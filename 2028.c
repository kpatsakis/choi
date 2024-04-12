void fun()
{
  int entity_5 = 31;
  char* entity_9;
  char entity_4[28] = "";
  entity_4 = NULL;
  char* entity_0;
  char entity_8[100] = "";
  entity_8 = NULL;
  memset(entity_8, 'j', 100-1);
  entity_8[100-1]='';
  entity_0 = (char*)malloc(68*sizeof(char));
  entity_0[68-1]='';
  memset(entity_4, 'P', 28-1);
  entity_4[28-1]='';
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[entity_5-1]='';
  memcpy(entity_9, entity_8, 100*sizeof(char));
}