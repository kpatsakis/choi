void fun()
{
  int entity_8 = 61;
  int entity_0 = 3;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  char* entity_4;
  char entity_9[7] = "";
  entity_9 = NULL;
  memset(entity_9, 'F', 7-1);
  entity_9[7-1]='';
  memset(entity_3, 'I', entity_0-1);
  entity_3[entity_0-1]='';
  entity_4 = (char*)malloc(53*sizeof(char));
  entity_4[53-1]='';
  memcpy(entity_4, entity_3, entity_0*sizeof(char));
}