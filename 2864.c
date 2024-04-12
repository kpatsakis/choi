void fun()
{
  int entity_6 = 36;
  char* entity_4;
  char* entity_2;
  char* entity_0;
  char entity_3[28] = "";
  entity_3 = NULL;
  entity_4 = (char*)malloc(52*sizeof(char));
  entity_4[52-1]='';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  entity_0 = (char*)malloc(90*sizeof(char));
  entity_0[90-1]='';
  memset(entity_3, 'H', 28-1);
  entity_3[28-1]='';
  memcpy(entity_2, entity_3, 28*sizeof(char));
}