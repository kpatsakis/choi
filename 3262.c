void fun()
{
  int entity_4 = 4;
  int entity_7 = 40;
  char* entity_2;
  char entity_6 = 'O';
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  entity_2 = (char*)malloc(82*sizeof(char));
  entity_2[82-1]='';
  memset(entity_9, 'U', entity_4-1);
  entity_9[entity_4-1]='';
  entity_4 = 53;
  memcpy(entity_2, entity_9, entity_4*sizeof(char));
}