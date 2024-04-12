void fun()
{
  int entity_6 = 41;
  int entity_7 = 50;
  char* entity_9;
  char entity_0[15] = "";
  entity_0 = NULL;
  char entity_4 = 'z';
  char* entity_2;
  memset(entity_0, 'D', 15-1);
  entity_0[15-1]='';
  entity_9 = (char*)malloc(57*sizeof(char));
  entity_9[57-1]='';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  memcpy(entity_2, entity_0, 15*sizeof(char));
}