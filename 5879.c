void fun()
{
  int entity_8 = 17;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char* entity_9;
  char entity_7[80] = "";
  entity_7 = NULL;
  char entity_0[72] = "";
  entity_0 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(35*sizeof(char));
  entity_6[35-1]='';
  memset(entity_0, 'T', 72-1);
  entity_0[72-1]='';
  memset(entity_7, 'D', 80-1);
  entity_7[80-1]='';
  memset(entity_4, 'F', entity_8-1);
  entity_4[entity_8-1]='';
  entity_9 = (char*)malloc(85*sizeof(char));
  entity_9[85-1]='';
  memcpy(entity_9, entity_4, entity_8*sizeof(char));
}