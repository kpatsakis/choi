void fun()
{
  int entity_4 = 50;
  char* entity_1;
  char entity_5[59] = "";
  entity_5 = NULL;
  memset(entity_5, 'W', 59-1);
  entity_5[59-1]='';
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  entity_4 = 92;
  memcpy(entity_1, entity_5, 59*sizeof(char));
}