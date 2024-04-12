void fun()
{
  int entity_2 = 56;
  int entity_9 = 37;
  entity_2 = 61;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char entity_8 = 'u';
  char* entity_1;
  entity_1 = (char*)malloc(70*sizeof(char));
  entity_1[70-1]='';
  memset(entity_6, 'p', entity_2-1);
  entity_6[entity_2-1]='';
  memcpy(entity_1, entity_6, entity_2*sizeof(char));
}