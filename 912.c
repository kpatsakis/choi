void fun()
{
  int entity_1 = 63;
  char* entity_5;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char entity_6[69] = "";
  entity_6 = NULL;
  char* entity_3;
  memset(entity_0, 'e', entity_1-1);
  entity_0[entity_1-1]='';
  memset(entity_6, 'N', 69-1);
  entity_6[69-1]='';
  entity_5 = (char*)malloc(14*sizeof(char));
  entity_5[14-1]='';
  entity_3 = (char*)malloc(29*sizeof(char));
  entity_3[29-1]='';
  memcpy(entity_3, entity_0, entity_1*sizeof(char));
}