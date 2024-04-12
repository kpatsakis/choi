void fun()
{
  int entity_6 = 37;
  int entity_0 = 65;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  char* entity_7;
  char* entity_9;
  char entity_2[53] = "";
  entity_2 = NULL;
  memset(entity_2, 'N', 53-1);
  entity_2[53-1]='';
  memset(entity_4, 'L', entity_0-1);
  entity_4[entity_0-1]='';
  entity_9 = (char*)malloc(52*sizeof(char));
  entity_9[52-1]='';
  entity_7 = (char*)malloc(33*sizeof(char));
  entity_7[33-1]='';
  memcpy(entity_7, entity_4, entity_0*sizeof(char));
}