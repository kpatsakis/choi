void fun()
{
  int entity_4 = 82;
  int entity_3 = 73;
  entity_4 = 68;
  char* entity_2;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(37*sizeof(char));
  entity_9[37-1]='';
  memset(entity_8, 'F', entity_4-1);
  entity_8[entity_4-1]='';
  entity_2 = (char*)malloc(9*sizeof(char));
  entity_2[9-1]='';
  memcpy(entity_9, entity_8, entity_4*sizeof(char));
}