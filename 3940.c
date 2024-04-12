void fun()
{
  int entity_2 = 79;
  char entity_7[93] = "";
  entity_7 = NULL;
  char* entity_4;
  char entity_6[16] = "";
  entity_6 = NULL;
  char* entity_0;
  memset(entity_6, 'S', 16-1);
  entity_6[16-1]='';
  memset(entity_7, 'j', 93-1);
  entity_7[93-1]='';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  entity_4 = (char*)malloc(39*sizeof(char));
  entity_4[39-1]='';
  memcpy(entity_0, entity_6, 16*sizeof(char));
}