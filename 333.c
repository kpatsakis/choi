void fun()
{
  int entity_1 = 4;
  entity_1 = 81;
  char* entity_0;
  char entity_8[17] = "";
  entity_8 = NULL;
  char* entity_4;
  char* entity_9;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  memset(entity_2, 't', entity_1-1);
  entity_2[entity_1-1]='';
  entity_0 = (char*)malloc(51*sizeof(char));
  entity_0[51-1]='';
  entity_4 = (char*)malloc(98*sizeof(char));
  entity_4[98-1]='';
  entity_9 = (char*)malloc(45*sizeof(char));
  entity_9[45-1]='';
  memset(entity_8, 'T', 17-1);
  entity_8[17-1]='';
  memcpy(entity_0, entity_2, entity_1*sizeof(char));
}