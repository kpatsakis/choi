void fun()
{
  int entity_4 = 35;
  int entity_5 = 93;
  char* entity_7;
  char entity_2[24] = "";
  entity_2 = NULL;
  char* entity_9;
  memset(entity_2, 'g', 24-1);
  entity_2[24-1]='';
  entity_7 = (char*)malloc(28*sizeof(char));
  entity_7[28-1]='';
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  entity_4 = 24;
  memcpy(entity_9, entity_2, 24*sizeof(char));
}