void fun()
{
  int entity_3 = 65;
  int entity_4 = 23;
  entity_3 = 13;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(69*sizeof(char));
  entity_5[69-1]='';
  memset(entity_2, 'A', entity_3-1);
  entity_2[entity_3-1]='';
  memcpy(entity_5, entity_2, entity_3*sizeof(char));
}