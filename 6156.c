void fun()
{
  int entity_7 = 11;
  entity_7 = 58;
  char entity_1[92] = "";
  entity_1 = NULL;
  char entity_9 = 'l';
  char* entity_4;
  memset(entity_1, 'W', 92-1);
  entity_1[92-1]='';
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[entity_7-1]='';
  memcpy(entity_4, entity_1, 92*sizeof(char));
}