void fun()
{
  int entity_9 = 26;
  int entity_7 = 70;
  entity_9 = 46;
  char entity_8[35] = "";
  entity_8 = NULL;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char* entity_2;
  memset(entity_3, 'd', entity_9-1);
  entity_3[entity_9-1]='';
  memset(entity_8, 'm', 35-1);
  entity_8[35-1]='';
  entity_2 = (char*)malloc(53*sizeof(char));
  entity_2[53-1]='';
  memcpy(entity_2, entity_3, entity_9*sizeof(char));
}