void fun()
{
  int entity_4 = 21;
  char* entity_0;
  char* entity_6;
  char* entity_9;
  char entity_5[29] = "";
  entity_5 = NULL;
  char entity_1[29] = "";
  entity_1 = NULL;
  memset(entity_1, 'i', 29-1);
  entity_1[29-1]='';
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  entity_0 = (char*)malloc(85*sizeof(char));
  entity_0[85-1]='';
  entity_6 = (char*)malloc(11*sizeof(char));
  entity_6[11-1]='';
  memset(entity_5, 'N', 29-1);
  entity_5[29-1]='';
  entity_4 = 24;
  memcpy(entity_9, entity_5, 29*sizeof(char));
}