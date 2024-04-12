void fun()
{
  int entity_0 = 77;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  char entity_3 = 'j';
  char* entity_5;
  char* entity_2;
  char* entity_9;
  entity_5 = (char*)malloc(49*sizeof(char));
  entity_5[49-1]='';
  entity_2 = (char*)malloc(59*sizeof(char));
  entity_2[59-1]='';
  memset(entity_8, 'Y', entity_0-1);
  entity_8[entity_0-1]='';
  entity_9 = (char*)malloc(99*sizeof(char));
  entity_9[99-1]='';
  memcpy(entity_2, entity_8, entity_0*sizeof(char));
}