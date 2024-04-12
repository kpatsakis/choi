void fun()
{
  int entity_8 = 68;
  char entity_2[entity_8] = "";
  char* entity_1;
  memset(entity_2, 'C', entity_8-1);
  entity_2[entity_8-1]='0';
  entity_1 = (char*)malloc(93*sizeof(char));
  entity_1[0]='0';
  entity_8 = 29;
  memcpy(entity_1, entity_2, entity_8*sizeof(char));
}