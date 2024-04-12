void fun()
{
  int entity_9 = 97;
  char entity_4[48] = "";
  entity_4 = NULL;
  char* entity_0;
  char entity_8[56] = "";
  entity_8 = NULL;
  char* entity_5;
  memset(entity_8, 'L', 56-1);
  entity_8[56-1]='';
  memset(entity_4, 'S', 48-1);
  entity_4[48-1]='';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  entity_5 = (char*)malloc(75*sizeof(char));
  entity_5[75-1]='';
  memcpy(entity_0, entity_8, 56*sizeof(char));
}