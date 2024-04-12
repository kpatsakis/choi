void fun()
{
  int entity_4 = 18;
  char* entity_2;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(26*sizeof(char));
  entity_8[26-1]='';
  entity_2 = (char*)malloc(22*sizeof(char));
  entity_2[22-1]='';
  memset(entity_9, 'L', entity_4-1);
  entity_9[entity_4-1]='';
  memcpy(entity_2, entity_9, entity_4*sizeof(char));
}