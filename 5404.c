void fun()
{
  int entity_5 = 79;
  int entity_3 = 14;
  char entity_1[69] = "";
  entity_1 = NULL;
  char* entity_4;
  char* entity_2;
  entity_4 = (char*)malloc(30*sizeof(char));
  entity_4[30-1]='';
  memset(entity_1, 'y', 69-1);
  entity_1[69-1]='';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  entity_3 = 87;
  memcpy(entity_2, entity_1, 69*sizeof(char));
}