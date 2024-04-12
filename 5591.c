void fun()
{
  int entity_4 = 20;
  int entity_1 = 2;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_3;
  char entity_6 = 's';
  memset(entity_2, 'e', entity_1-1);
  entity_2[entity_1-1]='';
  entity_3 = (char*)malloc(42*sizeof(char));
  entity_3[42-1]='';
  memcpy(entity_3, entity_2, entity_1*sizeof(char));
}