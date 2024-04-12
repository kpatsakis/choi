void fun()
{
  int entity_4 = 87;
  int entity_5 = 60;
  char* entity_9;
  char* entity_1;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  char entity_2[17] = "";
  entity_2 = NULL;
  entity_9 = (char*)malloc(50*sizeof(char));
  entity_9[50-1]='';
  memset(entity_8, 'S', entity_4-1);
  entity_8[entity_4-1]='';
  entity_1 = (char*)malloc(67*sizeof(char));
  entity_1[67-1]='';
  memset(entity_2, 'f', 17-1);
  entity_2[17-1]='';
  memcpy(entity_9, entity_8, entity_4*sizeof(char));
}