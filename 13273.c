void fun()
{
  int entity_6 = 97;
  char entity_9[60] = "";
  char* entity_1;
  memset(entity_9, 'q', 60-1);
  entity_9[60-1]='0';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[0]='0';
  entity_6 = 77;
  memcpy(entity_1, entity_9, 60*sizeof(char));
}