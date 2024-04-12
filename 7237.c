void fun()
{
  int entity_0 = 31;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  char entity_1[29] = "";
  entity_1 = NULL;
  char* entity_8;
  char* entity_5;
  char entity_7[0] = "";
  entity_7 = NULL;
  memset(entity_4, 'E', entity_0-1);
  entity_4[entity_0-1]='';
  memset(entity_1, 'K', 29-1);
  entity_1[29-1]='';
  entity_8 = (char*)malloc(66*sizeof(char));
  entity_8[66-1]='';
  memset(entity_7, 'y', 0-1);
  entity_7[0-1]='';
  entity_5 = (char*)malloc(31*sizeof(char));
  entity_5[31-1]='';
  memcpy(entity_5, entity_4, entity_0*sizeof(char));
}