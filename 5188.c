void fun()
{
  int entity_5 = 5;
  int entity_3 = 19;
  char* entity_9;
  char* entity_4;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char entity_2[17] = "";
  entity_2 = NULL;
  entity_9 = (char*)malloc(3*sizeof(char));
  entity_9[3-1]='';
  memset(entity_8, 'u', entity_3-1);
  entity_8[entity_3-1]='';
  memset(entity_2, 's', 17-1);
  entity_2[17-1]='';
  entity_4 = (char*)malloc(42*sizeof(char));
  entity_4[42-1]='';
  memcpy(entity_9, entity_8, entity_3*sizeof(char));
}