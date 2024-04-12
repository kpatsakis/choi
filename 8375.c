void fun()
{
  int entity_6 = 20;
  char entity_8 = 'S';
  char entity_1[14] = "";
  entity_1 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memset(entity_1, 'M', 14-1);
  entity_1[14-1]='';
  memcpy(entity_4, entity_1, 14*sizeof(char));
}