void fun()
{
  int entity_2 = 63;
  int entity_3 = 60;
  char entity_9[52] = "";
  entity_9 = NULL;
  char* entity_1;
  char* entity_4;
  char entity_0[0] = "";
  entity_0 = NULL;
  memset(entity_0, 'G', 0-1);
  entity_0[0-1]='';
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  memset(entity_9, 'r', 52-1);
  entity_9[52-1]='';
  entity_1 = (char*)malloc(87*sizeof(char));
  entity_1[87-1]='';
  memcpy(entity_4, entity_9, 52*sizeof(char));
}