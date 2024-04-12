void fun()
{
  int entity_6 = 63;
  int entity_2 = 85;
  int entity_3 = 19;
  char* entity_4;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  entity_4 = (char*)malloc(57*sizeof(char));
  entity_4[57-1]='';
  memset(entity_7, 'Y', entity_3-1);
  entity_7[entity_3-1]='';
  memcpy(entity_4, entity_7, entity_3*sizeof(char));
}