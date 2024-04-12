void fun()
{
  int entity_4 = 66;
  int entity_8 = 17;
  entity_4 = 88;
  char* entity_9;
  char entity_2[17] = "";
  entity_2 = NULL;
  char* entity_0;
  entity_9 = (char*)malloc(41*sizeof(char));
  entity_9[41-1]='';
  memset(entity_2, 'w', 17-1);
  entity_2[17-1]='';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[entity_4-1]='';
  memcpy(entity_0, entity_2, 17*sizeof(char));
}