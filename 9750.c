void fun()
{
  char entity_1[54] = "";
  entity_1 = NULL;
  char* entity_5;
  char* entity_0;
  char* entity_6;
  memset(entity_1, 'f', 54-1);
  entity_1[54-1]='';
  entity_0 = (char*)malloc(77*sizeof(char));
  entity_0[77-1]='';
  entity_6 = (char*)malloc(96*sizeof(char));
  entity_6[96-1]='';
  entity_5 = (char*)malloc(29*sizeof(char));
  entity_5[29-1]='';
  memcpy(entity_0, entity_1, 54*sizeof(char));
}