void fun()
{
  int entity_1 = 93;
  int entity_8 = 25;
  entity_8 = 49;
  char* entity_2;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char entity_9 = 'a';
  memset(entity_4, 'E', entity_8-1);
  entity_4[entity_8-1]='';
  entity_2 = (char*)malloc(34*sizeof(char));
  entity_2[34-1]='';
  memcpy(entity_2, entity_4, entity_8*sizeof(char));
}