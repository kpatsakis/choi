void fun()
{
  int entity_8 = 80;
  entity_8 = 69;
  char entity_6[69] = "";
  entity_6 = NULL;
  char* entity_9;
  char entity_3 = 's';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  memset(entity_6, 'b', 69-1);
  entity_6[69-1]='';
  memcpy(entity_9, entity_6, 69*sizeof(char));
}