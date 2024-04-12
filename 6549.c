void fun()
{
  int entity_2 = 75;
  entity_2 = 7;
  char* entity_0;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  char entity_9 = 'J';
  char entity_6[36] = "";
  entity_6 = NULL;
  char* entity_8;
  memset(entity_6, 'z', 36-1);
  entity_6[36-1]='';
  entity_0 = (char*)malloc(80*sizeof(char));
  entity_0[80-1]='';
  memset(entity_4, 'Z', entity_2-1);
  entity_4[entity_2-1]='';
  entity_8 = (char*)malloc(41*sizeof(char));
  entity_8[41-1]='';
  memcpy(entity_0, entity_4, entity_2*sizeof(char));
}