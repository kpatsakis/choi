void fun()
{
  int entity_4 = 2;
  int entity_6 = 7;
  int entity_7 = 74;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  char* entity_8;
  char entity_2 = 'F';
  entity_8 = (char*)malloc(8*sizeof(char));
  entity_8[8-1]='';
  memset(entity_9, 'D', entity_7-1);
  entity_9[entity_7-1]='';
  memcpy(entity_8, entity_9, entity_7*sizeof(char));
}