void fun()
{
  int entity_2 = 55;
  entity_2 = 30;
  char entity_1[89] = "";
  entity_1 = NULL;
  char* entity_3;
  memset(entity_1, 'W', 89-1);
  entity_1[89-1]='';
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[entity_2-1]='';
  memcpy(entity_3, entity_1, 89*sizeof(char));
}