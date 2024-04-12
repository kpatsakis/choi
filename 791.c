void fun()
{
  int entity_8 = 95;
  int entity_9 = 96;
  entity_8 = 60;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char entity_1 = 'f';
  char* entity_6;
  char entity_2[0] = "";
  entity_2 = NULL;
  memset(entity_2, 'J', 0-1);
  entity_2[0-1]='';
  memset(entity_4, 'j', entity_8-1);
  entity_4[entity_8-1]='';
  entity_6 = (char*)malloc(98*sizeof(char));
  entity_6[98-1]='';
  memcpy(entity_6, entity_4, entity_8*sizeof(char));
}