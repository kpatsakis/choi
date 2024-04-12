void fun()
{
  int entity_6 = 21;
  int entity_1 = 88;
  char* entity_7;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char* entity_0;
  entity_7 = (char*)malloc(52*sizeof(char));
  entity_7[52-1]='';
  entity_0 = (char*)malloc(7*sizeof(char));
  entity_0[7-1]='';
  memset(entity_3, 'u', entity_1-1);
  entity_3[entity_1-1]='';
  memcpy(entity_0, entity_3, entity_1*sizeof(char));
}