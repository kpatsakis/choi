void fun()
{
  int entity_1 = 97;
  char entity_9[50] = "";
  entity_9 = NULL;
  char entity_6 = 'b';
  char* entity_7;
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memset(entity_9, 'Z', 50-1);
  entity_9[50-1]='';
  entity_1 = 41;
  memcpy(entity_7, entity_9, 50*sizeof(char));
}