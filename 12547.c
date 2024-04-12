void fun()
{
  int entity_3 = 39;
  char entity_8[89] = "";
  char entity_0 = 'j';
  char* entity_1;
  char* entity_9;
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[0]='0';
  memset(entity_8, 'B', 89-1);
  entity_8[89-1]='0';
  entity_9 = (char*)malloc(7*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_1, entity_8, 89*sizeof(char));
}