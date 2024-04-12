void fun()
{
  int entity_9 = 82;
  entity_9 = 21;
  char entity_4[75] = "";
  entity_4 = NULL;
  char* entity_5;
  char entity_2[20] = "";
  entity_2 = NULL;
  memset(entity_2, 'Z', 20-1);
  entity_2[20-1]='';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  memset(entity_4, 'Z', 75-1);
  entity_4[75-1]='';
  memcpy(entity_5, entity_2, 20*sizeof(char));
}