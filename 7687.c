void fun()
{
  int entity_2 = 79;
  char* entity_3;
  char* entity_7;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  char entity_5 = 'J';
  entity_7 = (char*)malloc(97*sizeof(char));
  entity_7[97-1]='';
  entity_3 = (char*)malloc(28*sizeof(char));
  entity_3[28-1]='';
  memset(entity_1, 'D', entity_2-1);
  entity_1[entity_2-1]='';
  memcpy(entity_7, entity_1, entity_2*sizeof(char));
}