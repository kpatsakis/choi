void fun()
{
  int entity_7 = 5;
  int entity_9 = 64;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char entity_8[3] = "";
  entity_8 = NULL;
  char* entity_2;
  memset(entity_8, 'U', 3-1);
  entity_8[3-1]='';
  entity_2 = (char*)malloc(82*sizeof(char));
  entity_2[82-1]='';
  memset(entity_3, 'l', entity_9-1);
  entity_3[entity_9-1]='';
  memcpy(entity_2, entity_3, entity_9*sizeof(char));
}