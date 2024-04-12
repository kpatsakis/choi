void fun()
{
  int entity_1 = 23;
  char* entity_3;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  entity_3 = (char*)malloc(69*sizeof(char));
  entity_3[69-1]='';
  memset(entity_2, 'J', entity_1-1);
  entity_2[entity_1-1]='';
  entity_1 = 18;
  memcpy(entity_3, entity_2, entity_1*sizeof(char));
}