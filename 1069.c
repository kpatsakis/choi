void fun()
{
  int entity_8 = 10;
  int entity_2 = 5;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  char* entity_7;
  memset(entity_1, 'D', entity_8-1);
  entity_1[entity_8-1]='';
  entity_7 = (char*)malloc(31*sizeof(char));
  entity_7[31-1]='';
  memcpy(entity_7, entity_1, entity_8*sizeof(char));
}