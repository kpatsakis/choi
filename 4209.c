void fun()
{
  int entity_8 = 82;
  int entity_0 = 41;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char* entity_4;
  char entity_3[86] = "";
  entity_3 = NULL;
  char* entity_9;
  entity_4 = (char*)malloc(25*sizeof(char));
  entity_4[25-1]='';
  memset(entity_3, 'A', 86-1);
  entity_3[86-1]='';
  entity_9 = (char*)malloc(41*sizeof(char));
  entity_9[41-1]='';
  memset(entity_2, 'g', entity_8-1);
  entity_2[entity_8-1]='';
  memcpy(entity_9, entity_2, entity_8*sizeof(char));
}