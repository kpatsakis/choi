void fun()
{
  int entity_6 = 77;
  entity_6 = 8;
  char entity_2[78] = "";
  entity_2 = NULL;
  char* entity_9;
  char entity_5 = 'V';
  char entity_7 = 'B';
  char* entity_8;
  entity_9 = (char*)malloc(24*sizeof(char));
  entity_9[24-1]='';
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  memset(entity_2, 'H', 78-1);
  entity_2[78-1]='';
  memcpy(entity_8, entity_2, 78*sizeof(char));
}