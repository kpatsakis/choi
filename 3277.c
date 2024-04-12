void fun()
{
  int entity_9 = 10;
  int entity_3 = 96;
  char* entity_4;
  char entity_1[82] = "";
  entity_1 = NULL;
  char entity_2 = 'Z';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memset(entity_1, 'R', 82-1);
  entity_1[82-1]='';
  memcpy(entity_4, entity_1, 82*sizeof(char));
}