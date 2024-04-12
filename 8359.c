void fun()
{
  int entity_4 = 65;
  int entity_0 = 92;
  char entity_9 = 'O';
  char entity_3[69] = "";
  entity_3 = NULL;
  char* entity_1;
  memset(entity_3, 'B', 69-1);
  entity_3[69-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memcpy(entity_1, entity_3, 69*sizeof(char));
}