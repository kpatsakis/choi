void fun()
{
  int entity_7 = 39;
  int entity_2 = 79;
  entity_2 = 46;
  char entity_8 = 'I';
  char* entity_9;
  char entity_1[92] = "";
  entity_1 = NULL;
  memset(entity_1, 'w', 92-1);
  entity_1[92-1]='';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  memcpy(entity_9, entity_1, 92*sizeof(char));
}