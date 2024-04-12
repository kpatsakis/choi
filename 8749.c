void fun()
{
  int entity_5 = 55;
  int entity_1 = 7;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_8;
  char entity_4[90] = "";
  entity_4 = NULL;
  char* entity_9;
  memset(entity_4, 'j', 90-1);
  entity_4[90-1]='';
  entity_8 = (char*)malloc(98*sizeof(char));
  entity_8[98-1]='';
  entity_9 = (char*)malloc(34*sizeof(char));
  entity_9[34-1]='';
  memset(entity_2, 'w', entity_1-1);
  entity_2[entity_1-1]='';
  memcpy(entity_9, entity_2, entity_1*sizeof(char));
}