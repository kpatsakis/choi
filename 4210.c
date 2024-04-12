void fun()
{
  int entity_3 = 86;
  int entity_7 = 45;
  char entity_0[52] = "";
  entity_0 = NULL;
  char* entity_1;
  char* entity_8;
  char* entity_2;
  entity_2 = (char*)malloc(53*sizeof(char));
  entity_2[53-1]='';
  entity_1 = (char*)malloc(83*sizeof(char));
  entity_1[83-1]='';
  memset(entity_0, 'w', 52-1);
  entity_0[52-1]='';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  memcpy(entity_8, entity_0, 52*sizeof(char));
}