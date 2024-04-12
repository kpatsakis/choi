void fun()
{
  int entity_3 = 59;
  int entity_7 = 60;
  char* entity_0;
  char entity_5[96] = "";
  entity_5 = NULL;
  char* entity_8;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  memset(entity_6, 'f', entity_7-1);
  entity_6[entity_7-1]='';
  entity_0 = (char*)malloc(77*sizeof(char));
  entity_0[77-1]='';
  memset(entity_5, 'y', 96-1);
  entity_5[96-1]='';
  entity_8 = (char*)malloc(21*sizeof(char));
  entity_8[21-1]='';
  memcpy(entity_0, entity_6, entity_7*sizeof(char));
}